#include<stdio.h>
#include<string.h>
char word[100000001];
char search[1000000001];
int main(){
    int count=0;
scanf("%s%s",word,search);
int n=strlen(word);
char *ptr=word;
for(int i=0;i<n;i++){
if(strstr(word,search)!=NULL){
    count++;
    ptr++;      
}
}
printf("%d",count);


    return 0;
}