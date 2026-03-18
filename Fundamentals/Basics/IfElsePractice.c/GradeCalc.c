#include<stdio.h>
int main(){
    float a,b,c,d,a1,b1,c1,d1;
    printf("Enter Your CGPA of Computer Fundamental : ");
    scanf("%f",&a);
    printf("Enter Total Credit of Computer Fundamental : ");
    scanf("%f",&a1);
    printf("Enter Your CGPA of English : ");
    scanf("%f",&b);
    printf("Enter Total Credit of English : ");
    scanf("%f",&b1);
    printf("Enter Your CGPA of Math : ");
    scanf("%f",&c);
    printf("Enter Total Credit of Math : ");
    scanf("%f",&c1);
    printf("Enter Your CGPA of IBC : ");
    scanf("%f",&d);
    printf("Enter Total Credit of IBC : ");
    scanf("%f",&d1);
    float a2,b2,c2,d2,CGPA;
    a2=a*a1;
    b2=b*b1;
    c2=c*c1;
    d2=d*d1;
    CGPA = (a2+b2+c2+d2)/(a1+b1+c1+d1);
    printf("Your Obtained CGPA is : %.2f\n",CGPA);
    if(CGPA==4.00){
        printf("You got A+");
    } else if(CGPA<4.00 && CGPA>=3.75){
        printf("You got A-");
    } else if(CGPA<3.75 && CGPA>=3.50){
        printf("You got A ");
    } else if(CGPA<3.50 && CGPA>=3.00){
        printf("You got B+");
    } else if(CGPA<3.00 && CGPA>=2.50){
        printf("You got B");
    } else if(CGPA<2.50 && CGPA>=2.00){
        printf("You got C");
    } else if(CGPA<2.00 && CGPA>=1.00){
        printf("You got D");
    } else{
        printf("You got F");
    }









    return 0 ;
}