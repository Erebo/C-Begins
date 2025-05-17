#include <stdio.h>

int main() {
    int number, choice;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("\nChoose conversion type:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Decimal to Octal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("\nConverted value: ");

    switch(choice) {
        case 1:
            // Decimal to Binary
            {
                int binary[32], i = 0;
                int n = number;
                if(n == 0) {
                    printf("0");
                    break;
                }
                while(n > 0) {
                    binary[i] = n % 2;
                    n /= 2;
                    i++;
                }
                for(int j = i - 1; j >= 0; j--)
                    printf("%d", binary[j]);
            }
            break;

        case 2:
            // Decimal to Octal
            printf("%o", number);
            break;

        case 3:
            // Decimal to Hexadecimal
            printf("%X", number);  // Use %x for lowercase hex
            break;

        default:
            printf("Invalid choice.");
    }

    printf("\n");
    return 0;
}
