#include<stdio.h>
int main(){
long long n;
scanf("%lld",&n);
long long arr[n];
for(int i=0;i<n;i++){
    scanf("%lld",&arr[i]);
}
long long a,b;
long long temp;
long long max=0;
for(int i=1;i<=n-1;i++){
    a = arr[i];
    b = arr[i-1];
    while(b!=0){
long long temp=b;
b = a%b;
a = temp;
    }
    if(a>max);
    max=a;
}
printf("%lld",max);


    return 0;
}