#include<stdio.h>
int main(){
    int d; 
    char c;
    float f;
    double lf;
    long ld;
    printf("Size of int %dbytes\n",sizeof(d));
    printf("Size of cahr %dbytes\n",sizeof(c));
    printf("Size of float %dbytes\n",sizeof(f));
    printf("Size of double %dbytes\n",sizeof(f));
    printf("Size of long %dbytes\n",sizeof(d));

    int choice;

    printf("Choose a data type to check its size:\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. double\n");
    printf("5. long\n");

    printf("Enter your choice (1to5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Size of int: %zu bytes\n", sizeof(int));
            break;
        case 2:
            printf("Size of char: %zu bytes\n", sizeof(char));
            break;
        case 3:
            printf("Size of float: %zu bytes\n", sizeof(float));
            break;
        case 4:
            printf("Size of double: %zu bytes\n", sizeof(double));
            break;
        case 5:
            printf("Size of long: %zu bytes\n", sizeof(long));
            break;
        default:
            printf("Invalid choice.\n");
    }

    















    return 0;
}