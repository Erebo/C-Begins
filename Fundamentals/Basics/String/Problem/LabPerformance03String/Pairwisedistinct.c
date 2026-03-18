#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[1001];
    scanf("%s",word);
    int freq[256] = {0};
    for (int i = 0; word[i] != '\0'; i++)
    {
        freq[(unsigned char)word[i]]++;
    } 
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 1)
        {
            printf("No\n");
            return 0;
    } 
    
} 
int countUpper=0;
int countLower=0;
for(int i = 0;word[i]!='\0';i++){
    if(isupper(word[i])){
        countUpper++;
    } else if (islower(word[i])){
        countLower++;
    }
}
for(int i=0;i<256;i++){
    if(countUpper>=1 && countLower>=1){
        printf("Yes\n");
        return 0;
    } else{
        printf("No\n");
    }
}

    return 0;
}