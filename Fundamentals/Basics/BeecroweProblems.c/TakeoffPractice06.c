/*#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("A\n");
    } else{
        printf("B\n");
    }
}
    return 0;
}*/
/*#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = 1;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++){
        if(arr[i + 1] - 1 == arr[i]){
            count++;
        }
    }

    if(count == n && count > 1){
        printf("Yes\n");
    } else{
        printf("No\n");
    }

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1 ; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            count++;
        }
    }
    if (count == (n-1))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[1001];
    scanf("%s", word);
    int countC = 0;
    int countS = 0;
    int n = strlen(word);
        for (int i = 1; i <= n; i += 2)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                countC++;
            }
        }
        for (int i = 0; i <= n; i += 2)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                countS++;
            }
        }
    
    int a, b;
    a = n / 2;
    b = n - a;
    if (countC == a && countS == b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
