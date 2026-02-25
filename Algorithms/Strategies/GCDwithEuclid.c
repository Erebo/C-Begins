#include<stdio.h>
int gcd (int num1,int num2){
    if (num2==0){
        return num1;
    } else {
        gcd ( num2, num1%num2);
    }
}
int gcd3 (int num1,int num2,int num3){
    if ( num3==0){
        return gcd(num1,num2);
    } else{
        return gcd((num1,num2),num3);
    }
}
int main(){
    int x,y,z;
    printf("Enter the three numbers : \n");
    scanf("%d%d%d",&x,&y,&z);
    int value = gcd3(x,y,z);
    printf(" The gcd of %d,%d,%d is %d",x,y,z,value);
    return 0;
}