// count how many inputs are greater than 50;
#include<stdio.h>
int main(){
    int n[5];
    int count = 0;
    printf("Enter numbers-\n");
    for(int i = 0 ; i<=4 ; i++){
        scanf("%d",&n[i]);
        if(n[i] > 50){
            count++;
        }
    }
        if(count>0){
            printf("%d Intputs are greater than 50",count);
        } else{
            printf("No Inputs are greater than 50");
        }
        








        return 0;
}