/*
#include<stdio.h>
int main(){
    int n,m,count=0;
    scanf("%d",&n);
    m = n/5;
    if(n%5 != 0){
        count++;
    }
    printf("%d",count+m);

    return 0;
}
*/
// Now let's think the elephant can only walk the even numbers 2,4,6;
#include<stdio.h>
int main(){
    int n,m,count=0;
    scanf("%d",&n);
    if(n%2 != 0 ){
        printf("It can't be reached");
    } else{
        m = n/6;
        count += m;
        if(n%6 != 0){
            n = n%4;
            count += n;
        } 
    }
    printf("%d",count);
    return 0;
}