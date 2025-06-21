// Like given number is 1234 now i have to determine 1+2+3+4

#include<stdio.h>
int main(){
    int n,sum=0,temp,remainder;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(temp != 0){
        remainder = temp%10;
        sum += remainder;
        temp /= 10;
    }
    printf("%d",sum);



    return 0;
}