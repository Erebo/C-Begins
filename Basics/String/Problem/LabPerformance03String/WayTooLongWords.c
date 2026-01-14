// string printf problem :
/*#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        char word[10001];
        scanf("%s", word);
        int n = strlen(word);
        if (n < 11)
        {
            printf("%s\n", word);
        }
        else
        {
            printf("%c%d%c\n", word[0], (n - 2), word[n - 1]);
        }
    }
    return 0;
}*/
// Doing this with 2D Array :
#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    scanf("%d", &m);
    char word[m][1001];
    for (int i = 0; i < m; i++)
    {
        scanf("%s", word[i]);
    }
    for (int i = 0; i < m; i++)
    {
        int n = strlen(word[i]);
        if (n < 11)
        {
            printf("%s\n", word[i]);
        }
        else
        {
            printf("%c%d%c\n", word[i][0], n - 2, word[i][n - 1]);
        }
    }

    return 0;
}
