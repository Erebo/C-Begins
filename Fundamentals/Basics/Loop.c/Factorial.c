#include<stdio.h>
int main(){
    int n;
    int m=1;// we are taking n from the useres declaring i = 1 ; but if just initialize m with out value it contains garbage value and m=m*i gives garbage value so we have to declare the value of m first before multiplying it with something 
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        m = i*m;  
    }
    printf("Factorial of %d = %d",n,m);




    return 0;
}