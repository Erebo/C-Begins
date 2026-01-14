#include<stdio.h>
#include<string.h>
int main(){
char sentence[1001];
char word[1001];
scanf("%[^\n]",sentence);
scanf("%s",word);
if(strstr(sentence,word) != NULL){
    printf("FOUND\n");
} else{
    printf("NOT FOUND\n");
}


    return 0;
}