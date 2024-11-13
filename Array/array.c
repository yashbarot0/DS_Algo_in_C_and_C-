#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}