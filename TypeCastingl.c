//Type casting means converting one data type to another 
//  (1) write a program : Float to int 
#include<stdio.h>
int main(){
    float a; 
    int b;
    printf("Enter a number with points : ");
    scanf("%f",&a);
    b=(int)a;
    printf("Integer form of the number is : %d\n",b);
// force float division
    int Subject,Marks;
    float Average;
    printf("Enter the number of Subjects : ");
    scanf("%d",&Subject);
    printf("Enter the total Marks : ");
    scanf("%d",&Marks);
    Average = (float)Marks/Subject;
    printf("Your Average is : %f",Average);










return 0;
}