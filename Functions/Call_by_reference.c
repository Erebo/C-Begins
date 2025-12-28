#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);
    printf("The code is working !!");

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
