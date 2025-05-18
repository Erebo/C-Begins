#include<stdio.h>
#include<math.h>
int main(){
    float base,height,area;
    printf("Enter Base : ");
    scanf("%f",&base);
    printf("Enter Height : ");
    scanf("%f",&height);
    area = (float)1/2 * base * height;//here we have use type casting on 1/2 and make 1 to float so float 1/int 2 gives a float result and then all the float together give an float answer 
    printf("Area of the Triangle is : %.3f",area);

// 3 sides of the trinagle is given what is the area ? 
    float a,b,c,s,area1;
    printf("Enter the three sides of the triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    s = (a + b + c)/2;
    area1 = sqrt((s-a)*(s-b)*(s-c));
    printf("The Area Of the Triangle is : %f",area1);


// Area of a circle 

    float r,area2;
    printf("Enter the Radius of a circle : ");
    scanf("%f",&r);
    area2 = (float)22/7*r*r;
    printf("The Area of the circle is :%.3f",area2);
    








    return 0;
}