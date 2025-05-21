#include<stdio.h>
int main(){
    float digit;
    printf("Enter a number : ");
    scanf("%f",&digit);
    if(digit == 0){
        printf("The number is not even & not odd\n");   
    } else if ((int)digit %2 == 0 ){// % only works with int so,we have transformed float into int
        printf("The number is even\n");
    } else{
        printf("The number is odd\n");
    }if(digit<0){
        printf("The number is negative\n ");
    }   else{
        printf("The number is positive\n ");
    }
    





    return 0;
}