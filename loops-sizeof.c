/* No exemplo de código a seguir, o loop incrementa o contador arrayLength para cada elemento percorrido. A condição i < sizeof(arr) / sizeof(arr[0]) garante que o loop só seja executado enquanto houver elementos no array. */

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    size_t arrayLength = 0;
    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        arrayLength++;
    }
    printf("Number of elements in the array: %d\n", arrayLength);
    return 0;
}