// Character arrays are called string 
// A-65,a-97,0-48,9-57
// Ascii value of Null character \0 is 0 
// Null character is considered as a single character 
/*#include<stdio.h>
int main(){
    char arr[]="Hello World!";
    int i=0;
    while(arr[i] != '\0'){
        printf("%c",arr[i]);
        i++;
    }

    return 0;
}*/
// count the chars of string
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[99999];
    scanf("%[^\n]",str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);

    return 0;
}*/
// Reverse a string:
#include<stdio.h>
#include<string.h>
int main(){
char str[999999];
scanf("%[^\n]",str);
int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
} for(int i=count-1;i>=0;i--){
    printf("%c",str[i]);
}
    return 0;
}