#include<stdio.h>
int main(){
int i,n,index = -1,num;
scanf("%d%d",&n,&num);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
}
for(i=0;i<n;i++){
    if(arr[i]==num){
        index=i;
        break;
    }
}
if(index>-1){
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    } 
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
}
else{
    printf("The number doesn't exist\n");
}
    return 0 ;
}