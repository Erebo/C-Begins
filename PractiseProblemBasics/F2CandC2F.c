#include<stdio.h>
int main(){
float F,C,Fahrenhite,Celcius;
printf("Enter the Temperature(C) : ");
scanf("%f",&C);
Fahrenhite = (9*C)/5 + 32;
printf("The Temperature in Fahrentie :%.4f\n",Fahrenhite);
printf("Enter the Temperature(F) : ");
scanf("%f",&F);
Celcius = ((F-32)*5)/9; 
printf("The Temperture in Celcius :%.4f",Celcius);









    return 0;
}