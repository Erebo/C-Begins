#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("A\n");
    } else{
        printf("B\n");
    }
}
    return 0;
}