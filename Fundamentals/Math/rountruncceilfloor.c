#include<stdio.h>
#include<math.h>
int main(){
double Value,Round,Trunc,Ceil,Floor;
printf("Enter any number with a point : ");
scanf("%lf",&Value);
Round = round(Value);// if there is .5 or .5+ structure round function would add +1 with the non point part & print 
Trunc = trunc(Value);// trunc function exclude the part after point only print the part without the point
Ceil = ceil(Value);// sobceheye kacher upor diker purno sonkha count korbe
Floor = floor(Value);// sobcheye kacher nicher diker purno sonkha count korbe 
printf("Round Value of the %lf = %.2lf\n",Value,Round);
printf("Trunc Value of the %lf = %.2lf\n",Value,Trunc);
printf("Ceil Value of the %lf = %.2lf\n",Value,Ceil);
printf("Floor Value of the %lf = %.2lf",Value,Floor);


    return 0;
}
