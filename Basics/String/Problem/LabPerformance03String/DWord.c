#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[10001];
    scanf("%s", word);
    int countUpper = 0;
    int countLower = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isupper(word[i]))
        {
            countUpper++;
        }
        else
        {
            countLower++;
        }
    }
    if (countUpper > countLower)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = toupper(word[i]);
        }
    }
        else
        {
            for (int i = 0; word[i] != '\0'; i++)
            {
                word[i] = tolower(word[i]);
            }
        }
    

    printf("%s", word);

    return 0;
}