//Problem 1 : Find a Negative Number from an arry :
/*#include<stdio.h>
int main(){
int i,n[5],N=1;
printf("Enter 5 integer inputs : ");
for(i=0;i<5;i++){
    scanf("%d",&n[i]);
}  for (i = 0; i < 5; i++){
if (n[i]<0){
    N=0;
    break;
} 
}
if(N==0){
    printf("There is a negative integer in the input ");
} else{
    printf("Every element is Positive");
}

    return 0;
}*/
// Count How many Numbers are negative in the Array 
#include<stdio.h>
int main(){
int i,n[5],count=0;
printf("Enter 5 integers Value: ");
for(i=0;i<5;i++){
    scanf("%d",&n[i]);
}
for(i=0;i<5;i++){
    if(n[i]<0){
        count+=1;
    }
}
    if(count==0){
        printf("There is no Negative Number");
    }else if(count==1){
            printf("There is 1 Negative Number");
        } else{
            printf("There are %d Negative Number",count);
        }
        



    return 0;
}

