//02. Function with no return
/**#include<stdio.h>
void Hello(char Name);
int main(){
char What;
printf("What is your name ?\n");
scanf("%c",&What);
Hello(What);
    return 0;
}
void Hello(char Name){
    printf("Hello %c",Name);
}**/
//03.Now Write your whole name using a function with no return;
/**#include<stdio.h>
void Hello(char Name[]);
int main(){
    char What[100];
    printf("What's your name?\n");
    scanf("%[^\n]",What);
    Hello(What);
    
    return 0;
}
void Hello(char Name[]){
    printf("Hello,%s",Name);
}**/
// 04.Function that return value: 
#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int c,d,result;
    scanf("%d%d",&c,&d);
    result = add(c,d);
    printf("%d+%d=%d",c,d,result);
    return 0;
}