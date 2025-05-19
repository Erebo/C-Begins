#include<stdio.h>
#include<math.h>
int main(){
    double Value,Logarithm,Sin,Cos;
    printf("Enter a Value : ");
    scanf("%lf",&Value);
    Logarithm = log(Value);
    Sin = sin(Value);
    Cos = cos(Value);

    printf("Logarithmic value is log10(%.0lf)=%.4lf\n",Value,Logarithm);
    printf("Sin(%.0lf)=%.4lf\n",Value,Sin);
    printf("Cos(%.0lf)=%.4lf",Value,Cos);




    return 0;
}