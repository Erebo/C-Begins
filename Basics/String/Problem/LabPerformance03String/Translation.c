#include<stdio.h>
#include<string.h>
int main(){
char word[1001];
char temp[1001];
char reversed[1001];
scanf("%s%s",word,reversed);
int n= strlen(word);
int j=0;
for(int i=(n-1);i>=0;i--,j++){
    temp[j]=word[i];
}
temp[n]='\0';
if(strcmp(reversed,temp)==0){
    printf("YES\n");
} else{
    printf("NO\n");
}

    return 0;
}