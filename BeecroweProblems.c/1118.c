//(1)Identify valid socre like only accept when float is like 10.0 , 5.0
#include<stdio.h>
int main(){
float num1,num2,a,b,c,valid = 1;
scanf("%f",&num1);
if(num1 > 0 && (num1-(int)num1==0)){
    a = num1;
    }else {
        printf("nota invalida");
        valid=0;
    }
scanf("%f",&num2);
if(num2 > 0 && (num2-(int)num2==0)){
    b = num2;
    }else {
        printf("nota invalida");
        valid=0;
    }
if(valid == 1){
    c = (a+b)/2;
    printf("media =%.2f",c);
} else{
    printf("novo calculo (1-sim 2-nao)");
}








    return 0;
}