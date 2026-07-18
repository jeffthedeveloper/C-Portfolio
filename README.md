# 🚀 Polyglot Software Engineering Portfolio

![C Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
![C#](https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=csharp&logoColor=white)
![SQL Server](https://img.shields.io/badge/SQL_Server-CC2927?style=for-the-badge&logo=microsoft-sql-server&logoColor=white)
![Vulkan](https://img.shields.io/badge/Vulkan-555555?style=for-the-badge&logo=vulkan&logoColor=white)

## 📌 Sobre este Ecossistema

Este repositório consolida o meu ecossistema técnico, demonstrando a capacidade de transitar entre diferentes níveis de abstração: do gerenciamento manual de memória em **C**, passando pela robustez de sistemas corporativos em **C# (.NET)**, até a análise de dados complexos em **SQL Server**.

A proposta é evidenciar a transição do baixo nível para o alto nível, mostrando que compreendo como o software é construído desde os fundamentos do hardware até as demandas de um ambiente de dados de alta performance.

---

## 🛠️ Níveis de Desenvolvimento

### 1. Engenharia de Sistemas e Hardware (`/C-Portfolio`)
Focado nos pilares da computação e interação com hardware:
* **`hello-world.c`**: Estrutura básica e I/O.
* **`data-types.c` & `arithmetic-operators.c`**: Manipulação de dados primitivos.
* **`MemoryManagement.c`**: Implementação de alocação dinâmica e aritmética de ponteiros para controle de recursos.
* **`pointers-arithmetic.c`**: Gestão de memória e manipulação de endereços.
* **`arrays.c` & `strings.c`**: Manipulação de estruturas sequenciais.

### 2. Backend & Integração C# (`/Solution`)
Soluções focadas em processamento de dados, concorrência e integração de APIs:
* **`EmployeeProcessor.cs`**: Algoritmos utilizando LINQ para cálculos estatísticos complexos e ordenação.
* **`NotesStore.cs`**: Gestão de estados de negócio com validação rigorosa e tratamento de exceções.
* **`FootballAPIClient.cs`**: Integração assíncrona com APIs externas via `HttpClient`, processando JSON de forma eficiente.
* **`LowLevelOptimization.cs`**: Otimização crítica usando `unsafe code` e ponteiros para evitar sobrecarga do Garbage Collector.

### 3. Persistência e Analytics (SQL Server)
Consultas avançadas para análise de grandes volumes de dados:
* **`TransactionsAnalytics.sql`**: Queries de nível profissional utilizando agregações condicionais (`DATEPART`), funções de janela (`LAG`, `SUM OVER`) e análise de conformidade de volume.

---

## 🖥️ Hardware & Performance Analysis

Para garantir eficiência em cenários de alta demanda, realizo diagnósticos profundos da arquitetura de hardware. A análise dos limites físicos (extraídos via diagnóstico Vulkan) orienta como gerencio buffers, pools de memória e processamento paralelo.

| Parâmetro de Performance | Valor Identificado | Implicação Técnica |
| :--- | :--- | :--- |
| **Memory Heap Size** | ~1.83 GiB | Limite de alocação de dispositivos locais (VRAM/Local Memory). |
| **Max Image Dimension (2D)** | 16384 | Limite de textura/buffer para processamento gráfico/compute. |
| **Max Compute WorkGroup Size** | 1024 | Define o limite de paralelismo por kernel de execução. |
| **Min Memory Map Alignment** | 4096 bytes | Alinhamento obrigatório para operações de DMA/Memory Mapping. |
| **Subgroup Size** | 32 | Otimização de threads SIMD para evitar *divergent branching*. |

**Aplicações Práticas:**
* **Otimização de Cache:** Utilizo o `Min Memory Map Alignment` para realizar *padding* em estruturas e otimizar o *cache hit rate*.
* **Paralelismo:** O `Max Compute WorkGroup Size` define o teto do meu processamento paralelo em *kernels*.
* **Resiliência:** O monitoramento do `Memory Heap Size` previne erros de `Out of Memory` em sistemas críticos.

---

## 🚀 Como Compilar e Executar

### Para C
```bash
gcc -o programa MemoryManagement.c
./programa

```

### Para C#

Certifique-se de que o `.csproj` tenha `<AllowUnsafeBlocks>true</AllowUnsafeBlocks>` ativada.

```bash
dotnet run

```

---

*Desenvolvido por [Jefferson Firmino](https://github.com/jeffthedeveloper).*

```

```
