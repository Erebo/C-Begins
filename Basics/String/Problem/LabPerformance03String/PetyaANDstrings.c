#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[10001];
    char str2[10001];
    scanf("%s%s", str1, str2);
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    int n = strcmp(str1, str2);
    printf("%d\n", n);

    return 0;
}