#include <stdio.h>

int main() {
    double a, b;

    // Ask for input
    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    // Perform operations and display results
    printf("a + b = %.2lf\n", a + b);
    printf("a - b = %.2lf\n", a - b);
    printf("a * b = %.2lf\n", a * b);

    if (b != 0) {
        printf("a / b = %.2lf\n", a / b);
    } else {
        printf("Cannot divide by zero!\n");
    }

    // Modulus not allowed for double, but here's how it would look for int
    // printf("a %% b = %d\n", (int)a % (int)b);

    return 0;
}
