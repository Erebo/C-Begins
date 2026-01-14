/**#include<stdio.h>
int main(){
    int taka;
    scanf("%d",&taka);
    int need;
    scanf("%d",&need);
    int arr[10];
    int count=1;
    int digit=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            count += i;
            digit ++;
            if(count>=taka){
                break;
            }
            }
        }
    
if(digit>=need){
    printf("Happy\n");
}  else{
    printf("Sad\n");
}

    return 0;
}
    **/

/**#include<stdio.h>
int main(){
long long m,n;
scanf("%lld%lld",&m,&n);
printf("%lld %lld\n", m + n, m * n);
    return 0 ;
}**/
// 1-5,2-15,3-30
/**#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n<5){
    printf("0\n");
} else if (n>=30){
    printf("3\n");
} else if(n<15 & n>=5){
    printf("1\n");
} else{
    printf("2\n");
}
    return 0;
}**/
/**#include<stdio.h>
int main(){ 
long long t,w;
scanf("%lld%lld",&t,&w);
if (t>2000){
    printf("Bandor, these bananas are tasty enough.\n");
} else if(t > 0 && t <= 2000 && w > 100){
    printf("Bandor, these bananas are tasty enough.\n");
} else{
    printf("No Bandor, bananas are not tasty enough.\n");
}
return 0;
}**/

// n = number of trees , p = initial power , height of the first tree is always 01,
// power x =      h(i+1-hi) 
//  boro tree te jump korle power need hobe or minus hobe , choto tree te jump korle powe regain hobe 
/**#include<stdio.h>
int main(){
    int n,p,i;
    int diff;
    int count=0;
    scanf("%d%d",&n,&p);
    int arr[n];
    arr[0]=1;
   for(int i=1;i<n;i++){
    scanf("%d",&arr[i]);
   } for(int i=0;i<n-1;i++){
    diff = arr[i]-arr[i+1];
    p += diff;
    if(p<0){
        count++;
        break;
    }
   }
   if(count==0){
    printf("Yes\n");
   } else{
    printf("No\n");
   }

    return 0;
}**/
/**#include<stdio.h>
int main(){
    int n, p, i;
    int diff;
    int count = 0;

    scanf("%d%d", &n, &p);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++){
        diff = arr[i+1] - arr[i];
        if(diff > 0){
            p -= diff;
        } else{
            p += -diff;
        }

        if(p < 0){
            count++;
            break;
        }
    }

    if(count == 0){
        printf("Yes\n");
    } else{
        printf("No\n");
    }

    return 0;
}**/
// Floor Division Tile Fit Problem : mane ey grid ba floor e max koyta tiles bosbe
/**#include<stdio.h>
int main(){
int m,n,result;
scanf("%d%d",&m,&n);
result = (m*n)/2;
printf("%d\n",result);
    return 0;
}**/
/**#include<stdio.h>
int main(){
    long long a,b;
    scanf("%lld%lld",&a,&b);
    printf("%lld\n",a+b);

    return 0;
}**/
/**#include<stdio.h>
int main(){
    float A, B, C, D, Y;
    int X, N;

    scanf("%d%d", &X, &N);

    D = (float)N;
    C = D - 17;
    Y = (360 - C - D) / (3 * (float)X);
    B = 2 * (float)X * Y;

    printf("%.2f Degree\n", B);

    return 0;
}**/
/**#include<stdio.h>
int main(){
char arr[4];
    scanf(" %c%c%c",&arr[0],&arr[1],&arr[2]);
    if((arr[0]=='A')&& ((arr[1]=='A')||(arr[1]=='B'))&&((arr[2]=='A')||(arr[2]=='B')||(arr[2]=='C'))){
        printf("Yes\n");
    }   else{
        printf("No\n");
    }



    return 0;
} **/
/**#include<stdio.h>
int main(){
    long long  M,A,H,I,R,result;
    scanf("%lld%lld%lld%lld%lld",&M,&A,&H,&I,&R);
    result=(M*A)+((M/2)*H)+I;
    if(result>R){
        printf("Ichigo will Die single\n");
    }else{
            printf("Congratulations Ichigo\n");
        }
    

    
    return 0;
}
**/
#include<stdio.h>
int main(){
    int m,n,p;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m];
    int count=0;
    for(int i=0;i<m;i++){
        scanf("%d",arr[i]);
        p = arr[i]+arr[i+1];
        if(p>=n){
            count++;
        }
    }
printf("%d\n",count);
    
    return 0;
}