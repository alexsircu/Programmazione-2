#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[5];
    int *p;
    p = arr;

    for (size_t i = 0; i < 5; i++)
    {
        printf("Cell value before is: %d and the pointer value before is: %p\n", *p, p);
        *p = i;
        printf("Cell value after is: %d and the pointer value after is: %p\n", *p, p);
        p++;
    }
}