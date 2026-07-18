-- Análise de volume de transações por algoritmo e trimestre
SELECT 
    c.algorithm,
    CAST(SUM(CASE WHEN DATEPART(QUARTER, t.dt) = 1 THEN t.volume ELSE 0 END) AS DECIMAL(18,6)) AS transactions_Q1,
    CAST(SUM(CASE WHEN DATEPART(QUARTER, t.dt) = 2 THEN t.volume ELSE 0 END) AS DECIMAL(18,6)) AS transactions_Q2,
    CAST(SUM(CASE WHEN DATEPART(QUARTER, t.dt) = 3 THEN t.volume ELSE 0 END) AS DECIMAL(18,6)) AS transactions_Q3,
    CAST(SUM(CASE WHEN DATEPART(QUARTER, t.dt) = 4 THEN t.volume ELSE 0 END) AS DECIMAL(18,6)) AS transactions_Q4
FROM coins c
LEFT JOIN transactions t
    ON c.code = t.coin_code
   AND YEAR(t.dt) = 2020
GROUP BY c.algorithm
ORDER BY c.algorithm;

-- Detecção de sequências de transações de alto volume (Group By Time Window)
WITH ordered AS (
    SELECT 
        sender, dt, amount,
        CASE 
            WHEN DATEDIFF(MINUTE, LAG(dt) OVER (PARTITION BY sender ORDER BY dt), dt) > 60
              OR LAG(dt) OVER (PARTITION BY sender ORDER BY dt) IS NULL
            THEN 1 ELSE 0 
        END AS new_group
    FROM transactions
),
grp AS (
    SELECT 
        sender, dt, amount,
        SUM(new_group) OVER (PARTITION BY sender ORDER BY dt ROWS UNBOUNDED PRECEDING) AS grp_id
    FROM ordered
),
agg AS (
    SELECT 
        sender,
        MIN(dt) AS sequence_start,
        MAX(dt) AS sequence_end,
        COUNT(*) AS transactions_count,
        CAST(SUM(amount) AS DECIMAL(18,6)) AS transactions_sum
    FROM grp
    GROUP BY sender, grp_id
)
SELECT sender, sequence_start, sequence_end, transactions_count, transactions_sum
FROM agg
WHERE transactions_count >= 2 AND transactions_sum >= 150
ORDER BY sender, sequence_start, sequence_end;
