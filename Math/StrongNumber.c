// Strong Numbers are like 145=1!+4!+5!
#include<stdio.h>
int main(){
int n,temp,remainder,sum=0;
scanf("%d",&n);
temp=n;
while(temp != 0){
    remainder = temp%10;
    int Factorial=1;
    for(int i=1;i<=remainder;i++){
     Factorial *= i;
    }
    sum += Factorial;
    temp = temp/10;
}
if(n == sum){
    printf("%d is a Strong Number",n);
} else{
    printf("%d is not Strong Number",n);
}



    return 0;
}