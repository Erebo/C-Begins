#include<stdio.h>
#include<string.h>
int main(){
char str1[10001];
char str2[1001];
scanf("%s%s",str1,str2);
for(int i=0;str1[i]!='\0'&& str2[i]!='\0';i++){
if(str1[i]!=str2[i]){
    printf("%c is mistmatch with %c\n",str1[i],str2[i]);
    break;
} else {
    printf("Two words are same \n");
    break;
}
}
    return 0;
}