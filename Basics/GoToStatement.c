// in c you have exit one loop at a time but in many loop scenerion like a nested loop we need something to exit out from every loop in any special scenerio in that case we use goto statement it's like exit comand 
#include<stdio.h>
int main(){
    int a;
    retry: 
    printf("Input a Positive Number: ");
    scanf("%d",&a);
    if(a<0){
        printf("You have entered a wrong number !\nPlease put a valid number\n");
        goto retry;
    }
    printf("Right Number,Thank You ^-^");






    return 0;
}