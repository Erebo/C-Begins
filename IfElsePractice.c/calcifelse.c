#include<stdio.h>
int main(){
    float a,b;
    int operators;
    printf("Calculation Options \n(1) +\n(2) -\n(3) /\n(4) * \nEnter Your Operator : ");
    scanf("%d",&operators);
    printf("Enter 1st number : ");
    scanf("%f",&a);
    printf("Enter 2nd number : ");
    scanf("%f",&b);
    float add,sub,div,mult;
    add = a+b;
    sub = a-b;
    div = a/b;
    mult = a*b;
    if(operators == 1){
        printf("%.2f+%.2f = %.2f",a,b,add);
    } else if (operators == 2){
        printf("%.2f-%.2f = %.2f",a,b,sub);
    } else if (operators == 3){
        printf("%.2f/%.2f = %.2f",a,b,div);
    } else if (operators == 4){
        printf("%.2f*%.2f = %.2f",a,b,mult);
    } else{
        printf("You didn't enter the right operator !");
    }

    
    
    








    return 0;
}