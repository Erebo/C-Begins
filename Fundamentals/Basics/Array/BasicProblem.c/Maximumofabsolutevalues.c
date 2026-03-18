//A sequence of real numbers is given. Compute the absolute values of these numbers. Find the maximum among these absolute values.
#include<stdio.h>
int main(){
    int n;
    float max;
    scanf("%d",&n);
    float arr[n];
    for (int i=0;i<n;i++){
        scanf("%f",&arr[i]);
        if(arr[i]<0){
            arr[i]=arr[i]*(-1);
        }
        if(i==0){
            max==arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
printf("%.2f",max);



    return 0;
}