# 🚀 Polyglot Software Engineering Portfolio

![C Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
![C#](https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=csharp&logoColor=white)
![SQL Server](https://img.shields.io/badge/SQL_Server-CC2927?style=for-the-badge&logo=microsoft-sql-server&logoColor=white)

## 📌 Sobre este Ecossistema

Este repositório consolida o meu ecossistema técnico, demonstrando a capacidade de transitar entre diferentes níveis de abstração: do gerenciamento de memória em **C** ao desenvolvimento de sistemas corporativos em **C#** e persistência de dados complexa em **SQL Server**.

A proposta é evidenciar a transição do baixo nível para o alto nível, mostrando que compreendo como o software é construído desde os fundamentos da computação até as demandas de um ambiente de banco de dados empresarial.

---

## 🛠️ Níveis de Desenvolvimento

### 1. Fundamentos em C (`/C-Portfolio`)
Focado nos pilares da computação. Cada arquivo isola um conceito crítico:
* **`hello-world.c`**: Estrutura básica e I/O.
* **`data-types.c` & `arithmetic-operators.c`**: Manipulação de dados primitivos e lógica aritmética.
* **`pointers-arithmetic.c`**: Gestão de memória e manipulação de endereços (o coração do C).
* **`arrays.c` & `strings.c`**: Manipulação de estruturas sequenciais.

### 2. Backend & Integração C# (`/Solution`)
Soluções de negócio focadas em processamento de dados e integração de APIs.
* **`EmployeeDataProcessor.cs`**: Conjunto de algoritmos utilizando LINQ para manipulação de coleções, cálculos estatísticos (média de idade) e ordenação complexa.
* **`NotesStore.cs`**: Implementação de sistema de gerenciamento de estados (Active/Completed/Others) com validação de entradas e tratamento de exceções.
* **`FootballAPIClient.cs`**: Integração de sistemas via `HttpClient`, demonstrando consumo de APIs externas e processamento de dados JSON assíncronos.

### 3. Persistência de Dados (SQL Server)
Consultas avançadas para análise de grandes volumes de dados.
* **`TransactionsAnalytics.sql`**: Queries complexas envolvendo agregações, particionamento de períodos (Q1-Q4) e uso de funções de janela (`LAG`, `SUM OVER`) para identificar padrões de comportamento de usuários e transações.

---

## 🚀 Como Compilar e Executar

### Para C
```bash
gcc -o programa arquivo.c
./programa

```

### Para C#

Este código pode ser executado em qualquer ambiente .NET ou via CLI:

```bash
dotnet run

```

---

*Desenvolvido por [Jefferson Firmino](https://github.com/jeffthedeveloper).*

```
