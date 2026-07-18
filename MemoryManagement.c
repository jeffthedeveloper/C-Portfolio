#include <stdio.h>
#include <stdlib.h>

/* 
 * Este programa demonstra a alocação de memória manual.
 * Em sistemas embarcados ou alta performance, o controle manual 
 * é fundamental para evitar a sobrecarga do Garbage Collector.
 */
int main() {
    int n = 5, i;
    int *ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Falha na alocação de memória!\n");
        return 1;
    }

    // Aritmética de ponteiros para preencher o buffer
    for (i = 0; i < n; i++) {
        *(ptr + i) = i + 1;
    }

    printf("Buffer de memória alocado e preenchido via ponteiros:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    free(ptr); // Liberando manualmente o recurso de hardware (RAM)
    return 0;
}
