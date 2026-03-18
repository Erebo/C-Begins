#include <stdio.h>

int main() {
    int a, b, c, d, temp;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    printf("Enter number c: ");
    scanf("%d", &c);

    printf("Enter number d: ");
    scanf("%d", &d);

    printf("Before swapping: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    // Cyclic swap
    temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;

    printf("After swapping: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
