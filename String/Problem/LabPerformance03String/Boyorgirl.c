#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10001];
    scanf("%s", str1);
    int count=0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = i + 1; str1[j] != '\0'; j++)
        {
            if (str1[i] == str1[j])
            {
                count++;
            }
        }
        
    }
    printf("%d",count);
    
    return 0;
}