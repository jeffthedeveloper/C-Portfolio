#include <stdio.h>

int main(){
    int numeros[5] = {10, 20, 30, 40, 50};
    
    size_t totalSize = sizeof(numeros);
    size_t elementSize = sizeof(numeros[0]);
    size_t arrayLength = sizeof(numeros) / sizeof(numeros[0]);

    printf("Tamanho total: %d\n", totalSize);

    for (int i = 0; i < arrayLength; i++){
        printf("Numero: %d\n", numeros[i]);
    }
    
    return 0;
    
}