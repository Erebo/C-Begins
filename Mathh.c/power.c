#include<stdio.h>
#include<math.h>//for pow function
int main(){
    int base,power;
    printf("Enter base number : ");
    scanf("%d",&base);
    printf("Enter Power : ");
    scanf("%d",&power);
    double result;//pow returns double type so, double is preferable than float
    result = pow(base,power);
    printf("So,the result is :%.3lf",result);





    return 0;
}