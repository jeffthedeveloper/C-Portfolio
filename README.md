# Portfólio de Estudos em Linguagem C

## Sobre este Repositório

Bem-vindo ao meu portfólio de estudos da Linguagem C. Eu criei este repositório para documentar meu aprendizado e demonstrar meu entendimento dos conceitos fundamentais desta linguagem.

Este repositório não é uma aplicação singular, mas sim uma coleção de programas independentes. Cada arquivo `.c` isola e demonstra um conceito central da linguagem, desde a sintaxe básica (como `hello-world.c`) até tópicos mais complexos, como gerenciamento de memória e aritmética de ponteiros.

## 📚 Conceitos Demonstrados

Cada arquivo neste repositório foca em um pilar da programação em C:

  * **`hello-world.c`**

      * O programa introdutório essencial. Demonstra a estrutura básica de um arquivo C, a inclusão da biblioteca `stdio.h` e o uso da função `printf`.

  * **`data-types.c`**

      * Explora a declaração e utilização dos tipos de dados primitivos da linguagem, como `int`, `float`, `double` e `char`.

  * **`arithmetic-operators.c`**

      * Demonstração de operadores aritméticos básicos (adição, subtração, multiplicação, divisão) e sua aplicação.

  * **`conditionals.c`**

      * Implementação de lógica de controle de fluxo utilizando estruturas condicionais, como `if`, `else if` e `else`.

  * **`loops-sizeof.c`**

      * Demonstração de estruturas de repetição (loops `for` e `while`) e o uso do operador `sizeof` para determinar o tamanho em bytes de diferentes tipos de dados.

  * **`arrays.c`**

      * Prática com declaração, inicialização e iteração sobre arrays estáticos.

  * **`strings.c`**

      * Manipulação de strings em C, que são tratadas como arrays de caracteres (`char[]`) terminados pelo caractere nulo (`\0`).

  * **`pointers-arithmetic.c`**

      * Um mergulho no conceito mais poderoso do C: ponteiros. Este arquivo demonstra como declarar ponteiros, obter endereços de memória (referência), acessar valores (desreferência) e realizar aritmética de ponteiros para navegar por estruturas de dados.

## 🚀 Como Utilizar

Este repositório é feito para ser lido e compilado arquivo por arquivo.

1.  Clone o repositório:

    ```bash
    git clone https://github.com/jeffthedeveloper/C-Portfolio.git
    cd C-Portfolio
    ```

2.  Para compilar e executar qualquer um dos projetos (usando `gcc`, por exemplo):

    ```bash
    # Exemplo compilando o arquivo de ponteiros
    gcc pointers-arithmetic.c -o pointers

    # Executar o programa compilado
    ./pointers
    ```
