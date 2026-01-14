#include<stdio.h>
int main(){
int n,i,isPrime=1;
printf("Enter any number : ");
scanf("%d",&n);
for(i=2;i<n;i++){
for(i=2;i<n;i++){
    if(n%i == 0){
        isPrime=0;
        break;
    }
}
if(isPrime==0){
printf(" ");
} else{
    printf("%d",i);
}

   
}
     return 0;
}