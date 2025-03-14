/* // data_type arr_length = *(&arr + 1) - arr;

&arr: Representa um ponteiro para um array de elementos.
(&arr + 1): Incrementa o ponteiro para o array arr em 1. Como arr é um array, o ponteiro apontará para o próximo array consecutivo do mesmo tipo.
Exemplo de aritmética de ponteiros
A expressão *(&arr + 1) - arr calcula a diferença entre o ponteiro e o próximo array &arr + 1, assim como o ponteiro para o primeiro elemento do array original. Nesse caso, a próxima área de memória é o fim do array. A diferença resultante será igual ao número de elementos do array, como ilustra o exemplo de código abaixo: */

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = *(&arr + 1) - arr;
    printf("Number of elements in the array: %d\n", length);
    return 0;
}