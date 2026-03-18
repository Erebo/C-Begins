//to Upper & to Lower is just a libary function to make our work easier that's it 
#include<stdio.h>
int main(){
char Lower,Upper;
printf("Enter a Lower case letter : ");
scanf("%c",&Lower);
Upper=toupper(Lower);
printf("Upper case letter of your input is : %c\n",Upper);
printf("Enter any Upper case letter : ");
scanf(" %c",&Upper);
Lower=tolower(Upper);
printf("Lower case of your input is : %c",Lower);

// here 4 actions are done using 2 variables because 
// (1) Reusing the variables
// (2) Overwriting the values 









    return 0;
}