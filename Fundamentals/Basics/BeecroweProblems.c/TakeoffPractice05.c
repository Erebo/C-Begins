/**#include <stdio.h>
long long main()
{
    long long n;
    scanf("%d", &n);
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long a, b;
    long long box1, box2;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                box1 == arr[i];
                box2 == arr[j];

                if (box1 < 11)
                {
                    a = box1 % 3;
                    b = box1 - a;
                    prlong longf("%d %d\n", a, b);
                }
                if (box1 >= 11)
                {
                    a = box1 / 2;
                    b = box1 - a;
                    prlong longf("%d %d\n", a, b);
                }
                if (box2 < 11)
                {
                    a = box2 % 2;
                    b = box2 - a;
                    prlong longf("%d %d\n", a, b);
                }
                if (box2 >= 11)
                {
                    a = box2 / 2;
                    b = box2 - a;
                    prlong longf("%d %d\n", a, b);
                }
            }
            else
            {
                if (arr[i] < 11)
                {
                    a = arr[i] % 3;
                    b = arr[i] - a;
                    prlong longf("%d %d\n", a, b);
                }
                if (arr[i] >= 11)
                {
                    a = arr[i] / 2;
                    b = arr[i] - a;
                    prlong longf("%d %d\n", a, b);
                }
            }
        }
    }
    return 0;
}**/
/*#include <stdio.h>

long long main()
{
    long long m, n;
    scanf("%d", &m);

    for (long long i = 0; i < m; i++)
    {
        scanf("%d", &n);
        if (n <= 10)
        {
            prlong longf("0 %d\n", n);
        }
        else
        {
            prlong longf("%d 10\n", n - 10);
        }
    }

    return 0;
} */
/*#include <stdio.h>
#include <string.h>
long long main()
{
    long long m, n, count = 0;
    scanf("%d", &m);
    for (long long j = 0; j < n; j++)
    {
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        for (long long i = 0; i < n; i++)
        {
            if (str[i] == 'T')
            {
                count++;
            }
            if (n == 5)
            {
                if (count == 1 && str[i] >= 'a' && str[i] <= 'z')
                {
                    prlong longf("YES\n");
                    break;
                }
            }
            else
            {
                prlong longf("NO\n");
                break;
            }
        }
    }
    return 0;
} */
// at first take an array of 6 digit
// then 1st 3 ta jog koro then last 3 ta jog koro
// soman hole yes
/*#include <stdio.h>
long long main()
{
    long long arr[6];
    long long sum1 = 0;
    long long sum2 = 0;
    long long n;
    scanf("%d", &n);
    for (long long j = 0; j < n; j++)
    {
        for (long long i = 0; i < 6; i++)
        {
            scanf("%d", &arr[i]);
        }
        sum1 = arr[0] + arr[1] + arr[2];
        sum2 = arr[3] + arr[4] + arr[5];
        if (sum1 == sum2)
        {
            prlong longf("YES\n");
        }
        else
        {
            prlong longf("NO\n");
        }
    }
    return 0;
}*/
/*#include <stdio.h>
long long main()
{
    long long arr[6];
    long long n;
    scanf("%d", &n);
    for (long long j = 0; j < n; j++)
    {
        for (long long i = 0; i < 6; i++)
        {
            scanf("%d", &arr[i]);
        }

        long long sum1 = arr[0] + arr[1] + arr[2];
        long long sum2 = arr[3] + arr[4] + arr[5];

        if (sum1 == sum2)
        {
            prlong longf("YES\n");
        }
        else
        {
            prlong longf("NO\n");
        }
    }
    return 0;
}
*/
/*#include<stdio.h>
long long main(){
long long n,a,b,c;
scanf("%d",&n);
for(long long i=0;i<n;i++){
scanf("%d%d%d",&a,&b,&c);
if(a+b==c){
    prlong longf("+\n");
} else{
    prlong longf("-\n");
}
}
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>
long long main(){
    long long n;
    scanf("%d",&n);
    char str1[3+1];
    char str2[3+1];
    for(long long i=0;i<n;i++){
        scanf("%s %s",str1,str2);
        char temp=str1[0];
        str1[0]=str2[0];
        str2[0]=temp;
        prlong longf("%s %s\n",str1,str2);
    }

    return 0;
}*/
/*#include <stdio.h>
long long main(){
long long n;
scanf("%d",&n);
long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (1900 <= arr[i])
        {
            prlong longf("Division 1\n");
        }
        else if (1600 <= arr[i] && arr[i] <= 1899)
        {
            prlong longf("Division 2\n");
        }
        else if (1400 <= arr[i] && arr[i] <= 1599)
        {
            prlong longf("Division 3\n");
        }
        else
        {
            prlong longf("Division 4\n");
        }
    }
    return 0;
}*/
/*#include<stdio.h>
long long main(){
long long a,b,sum;
scanf("%lld%lld",&a,&b);
sum=a+b;
prlong longf("%lld\n",sum);
    return 0;
}*/
/*#include<stdio.h>
long long main(){
long long a,b,c,box;
scanf("%d%d%d",&a,&b,&c);
if(b>c){
    box=a-(b+c);
    if((box+c)>b){
        prlong longf("No\n");
    } else{
        prlong longf("Yes\n");
    }
} else if(c>b){
    box=a-(b+c);
    if((box+b)>c){
        prlong longf("No\n");
    } else{
        prlong longf("Yes\n");
    }
} else{
    prlong longf("No\n");
}
    return 0;
}*/
/*#include <stdio.h>
long long main()
{
    long long n;
    scanf("%d", &n);
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long a, b;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] < 11)
        {
            a = arr[i] / 3;
            b = arr[i] - a;
            prlong longf("%d %d\n", a, b);
        }
        if (arr[i] >= 11)
        {
            a = arr[i] / 2;
            b = arr[i] - a;
            prlong longf("%d %d\n", a, b);
        }
    }
    return 0;
} */
/*#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if ((a >= b && a <= c) || (a <= b && a >= c))
        printf("%lld\n", a);
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        printf("%lld\n", b);
    else
        printf("%lld\n", c);

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int x, x1, x2, y, y1, y2, math;
    scanf("%d%d%d%d%d%d", &x, &y, &x1, &y1, &x2, &y2);
    math = ((x - x1) * (y2 - y1)) - ((y - y1) * (x2 - x1));
    if (math == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}*/
/*#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    long long sum = 0;
    scanf("%lld", &n);
    long long arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        if(arr[i] > 0 && arr[i] % 6 == 0) {
            count++;
            sum += arr[i];
        }
    }
    printf("%d %lld", count, sum);
    return 0;
}*/


