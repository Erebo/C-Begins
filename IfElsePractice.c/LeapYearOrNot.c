#include<stdio.h>
int main(){
    float year;
    printf("Enter any Year : ");
    scanf("%f",&year);
    if(((int)year % 4 == 0 && (int)year % 100 != 0) || ((int)year % 400 == 0)){
        printf("The year is a leap Year ");
    } else{
            printf("The year is not a leap Year \n");
        }
        
        
        int year1;

    printf("Enter any Year : ");
    scanf("%d",&year1);
    if((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0)){
        printf("The year is a leap Year ");
    } else{
            printf("The year is not a leap Year ");
        }
    





    return 0;
}