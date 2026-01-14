#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10001];
    scanf("%s", str1);
    int count = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        int word = 1;
        for (int j = 0; j < i; j++)
        {
            if (str1[i] == str1[j])
            {
                 word = 0;
                 break;
            }
        }
        if (word == 1)
        {
            count++;
        }
    }
    if(count %2==0){
        printf("CHAT WITH HER!\n");
    } else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}