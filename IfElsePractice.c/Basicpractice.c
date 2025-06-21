// Find the bigger value among the three numbers 
#include <stdio.h>

int main() {
    float num1, num2, num3;
    float first, second, third;

    // Input
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Sorting logic for descending order
    if (num1 >= num2 && num1 >= num3) {
        first = num1;
        if (num2 >= num3) {
            second = num2;
            third = num3;
        } else {
            second = num3;
            third = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        first = num2;
        if (num1 >= num3) {
            second = num1;
            third = num3;
        } else {
            second = num3;
            third = num1;
        }
    } else {
        first = num3;
        if (num1 >= num2) {
            second = num1;
            third = num2;
        } else {
            second = num2;
            third = num1;
        }
    }

    // Output
    printf("The descending order is: %.2f > %.2f > %.2f\n", first, second, third);

    return 0;
}
// if(condition 1){---------
//--------} 
//else if(condition 2){---------
//-----------}
//else(condition 3){----------
//-----------}
//if(condition 4){--------
//--------}
//elseif(condition 5){--------
//--------------}
//else(condition 6){---------
//-----------}