#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = (float)a / b; // casting para float


    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}