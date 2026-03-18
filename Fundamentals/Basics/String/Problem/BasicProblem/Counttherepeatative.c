#include<stdio.h>
int main(){
char str1[10001];
scanf("%s",str1);
int freq[256]={0};
for(int i=0;str1[i]!='\0';i++){
    freq[(unsigned char)str1[i]]++;
} for(int i=0;i<256;i++){
    if(freq[i]>1){
        printf("%c is %d times",i,freq[i]);
    }
}


    return 0;
}