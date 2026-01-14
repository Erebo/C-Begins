#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1001];
    char str2[1001];
    scanf("%s%s",str1,str2);
    int n = strcmp(str1, str2);
    if (n == 0)
    {
        printf("%s\n", str1);
    }
    else if (n < 0)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }
    

    return 0;
}