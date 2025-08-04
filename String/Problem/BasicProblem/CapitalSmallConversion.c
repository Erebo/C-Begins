/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){
int n;
scanf("%d",&n);
char str1[1001];
for(int i=0;i<n;i++){
    scanf("%s",str1);
    for(int i=0;str1[i]!='\0';i++){
        str1[i]=tolower(str1[i]);
        //str1[i]=toupper(str1[i]);
    }
    printf("%s\n",str1);
}

    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
int n;
scanf("%d",&n);
char word[1001];
char upper[1001];
char lower[1001];
for(int i=0;i<n;i++){
    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        upper[i]=toupper(word[i]);
        lower[i]=tolower(word[i]);
        printf("%s\n",upper);
        printf("%s\n",lower);
    }
}

    return 0;
}*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int n;
    scanf("%d", &n);
    char word[1001];
    char upper[1001];
    char lower[1001];

    for(int i = 0; i < n; i++){
        scanf("%s", word);

        int j;
        for(j = 0; word[j] != '\0'; j++){
            upper[j] = toupper(word[j]);
            lower[j] = tolower(word[j]);
        }

        // Don't forget to end the strings!
        upper[j] = '\0';
        lower[j] = '\0';

        printf("Uppercase: %s\n", upper);
        printf("Lowercase: %s\n", lower);
    }

    return 0;
}
