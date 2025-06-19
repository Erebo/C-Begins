// A prime number is a number greater than 1 and is divided by only itself and 1
#include<stdio.h>
int main(){
    int n,isprime=1;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("%d is not a prime number\n",n);
        return 0;
    } else{
        for(int i=2; i<n;i++){
            if(n%i == 0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime == 0){
        printf("%d is not a Prime Number \n",n);
    } else{
        printf("%d is a Prime Number\n",n);
    }













    return 0;
}