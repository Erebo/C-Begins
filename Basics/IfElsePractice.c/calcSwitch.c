#include<stdio.h>
int main(){
    float a,b;
    char operator;
    printf("Enter Operator ( + - * / ) : ");
    scanf("%c",&operator);
    printf("Enter 1st Number : ");
    scanf("%f",&a);
    printf("Enter 2nd Number : ");
    scanf("%f",&b);
    switch(operator){
        case '+' :
        printf("%.2f+%.2f = %.2f",a,b,a+b);
        break;
        case '-':
        printf("%.2f-%.2f = %.2f",a,b,a-b);
        break;
        case '*':
        printf("%.2f*%.2f = %.2f",a,b,a*b);
        break;
        case '/':
        if(b == 0){
            printf("Undefine");            
        } else {
            printf("%.2f/%.2f = %.2f",a,b,a/b);
        }
        break;
        default:
        printf("You didn't enter a valid operator ");
    }











    return 0;
}