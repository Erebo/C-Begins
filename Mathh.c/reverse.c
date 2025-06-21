#include<stdio.h>
int main(){
    int reversed=0,n,remainder,boxed;
    scanf("%d",&n);
    boxed = n;
    while(boxed != 0){
        remainder = boxed%10;
        reversed = reversed*10+remainder ;
        boxed = boxed/10;
    }
    printf("Reverse of the digit  %d is %d\n",n,reversed);

    return 0;
}