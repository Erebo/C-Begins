#include<stdio.h>
int main(){
    int n,remainder,boxed;
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        int reversed=0;
    boxed = i;
    while(boxed != 0){
        remainder = boxed%10;
        reversed = reversed*10+remainder ;
        boxed = boxed/10;
    }
    if(i == reversed){
        printf("%d\n",i);
    } else{
        continue;
    }
    }
    return 0;
}