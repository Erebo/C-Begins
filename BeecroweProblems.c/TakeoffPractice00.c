/*#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        long long product = 1;

        for (int i = 0; i < N; i++)
        {
            int num;
            scanf("%d", &num);
            product *= num;
        }

        printf("%lld\n", product);
    }

    return 0;
}*/
/*#include<stdio.h>
int main(){
int n;
double a,result,sum=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
} for(int i=0;i<n;i++){
a=(double)arr[i]*0.01;
sum += a;
}
result=(sum/n)*(float)100;
printf("%.12lf",result);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    long long n, m, result;
    scanf("%lld%lld", &n, &m);
    result = (n - m) * 10000;
    printf("%lld\n", result);
    return 0;
}*/
/*#include<stdio.h>
int main(){
int x,y,result;
scanf("%d%d",&x,&y);
result=y*2;
if(x>=result){
    printf("Yes\n");
} else{
    printf("No\n");
}
    return 0 ;
}
*/
/*#include <stdio.h>
#include <math.h>

int main() {
    long long n, m;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++) {
        int isPrime = 1;
        scanf("%lld", &m);

        if (m <= 1) {
            printf("no\n");
            continue;
        }

        for (long long j = 2; j <= sqrt(m); j++) {
            if (m % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int count = 0;
        scanf("%d%d", &y, &z);
        if ((y * 15 >= (z * 2)))
        {
            count++;
        }
        if (count == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if ((x * 3) <= (y * 2))
        {
            printf("%d\n", (x * 3));
        }
        else
        {
            printf("%d\n", (y * 2));
        }
    }
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str1[1001];
    for(int i=0;i<n;i++){
        scanf("%s",str1);
        int len=strlen(str1);
        str1[len-2]='\0';
        printf("%si\n",str1);
    }
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if ((a - b) % 2 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
*/
#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld", &a); 

    for (long long i = 0; i < a; i++) {
        scanf("%lld", &b); 

        long long count = (b / 2) + 1; 
        printf("%lld\n", count);
    }

    return 0;
}
