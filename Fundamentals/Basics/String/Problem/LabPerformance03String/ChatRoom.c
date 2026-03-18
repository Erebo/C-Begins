#include <stdio.h>
#include <string.h>
int main()
{
    char word[1001];
    scanf("%s", word);
    char defined[] = "hello";
    if (strstr(word, defined) != NULL)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}