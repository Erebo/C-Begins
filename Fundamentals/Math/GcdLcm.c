#include <stdio.h>

int main() {
    int num1, num2, a, b, remainder;

    // Input prompt
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Correct assignment
    a = num1;
    b = num2;

    // Euclidean Algorithm
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    // Output result
    printf("GCD of %d and %d is %d\n", num1, num2, a);

    return 0;
}
