// AB : 
/**#include<stdio.h>
int main(){
    int countA=0;
    int countB=0;
    int resultA;
    int resultB;
    long long steps;
    scanf("%lld",&steps);
    if(steps<3){
        return 0;
    }
    long long A,B;
    scanf("%lld%lld",&A,&B);
    if(A<=0 || A>steps-2 || B<=0 || B>steps-2){
        return 0;
    }
    long long arrA[A];
    for(int i=0;i<A;i++){
        scanf("%lld",arrA[i]);
        if(arrA[i]%2==0){
            countA ++;
        }
    }
resultA=(steps-1)+(countA*2)+((A-countA)*4);
long long arrB[B];
for(int i=0;i<B;i++){
    scanf("%lld",arrB[i]);
    if(arrB[i]%2==0){
        countB++;
    }
}
resultB=(steps-1)+(countB*2)+((B-countB)*4);
if(countA > countB){
    printf("B\n");
} else if(countA<countB){
    printf("A\n");
} else{
    printf("DRAW\n");
}

    return 0;
}
    **/
/**#include<stdio.h>
int main(){
printf("Queen\n");
    return 0;
}**/
/**#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d",&a);
if(a<=0 || a>1000){
    return 0;
}
scanf("%d%d%d",&b,&c,&d);
if(b<=a && c<=a && d<=a){
    printf("OK\n");
} else{
    printf("ERROR\n");
}
    return 0;
}
**/
//1≤N≤50,1≤K≤50,5≤X≤10
/**#include<stdio.h>
int main(){
int N,K,X,result;
scanf("%d%d",&N,&K);
if(N<1 || N>50 || K<1 || K>50){
    return 0;
}
scanf("%d",&X);
if(X<5 || X>10){
    return 0;
}
result=(((N-K)+1)*X)*2;
printf("%d\n",result);
    return 0;
}**/
//AF : 
//n,a,b,c(3≤ n ≤ 10^5 ;1≤b<a<c≤n)
/**#include<stdio.h>
int main(){
    long long result;
long long n;
scanf("%lld",&n);
if(n<3){
    return 0;
}
long long b,a,c;
scanf("%lld%lld%lld",&a,&b,&c);
if(b<1 || b>a || a>c || c>n || b==a || c==a){
    return 0 ;
}
long long arr[n];
long long countA=0;
for(long long i=0;i<n;i++){
    scanf("%lld",&arr[i]);
} for(long long i=(a-1);i<(c-1);i++){
countA += arr[i];
}
long long countB;
for(long long i=(a-1);i>(b+1);i--){
    countB += arr[i];
}
if(countA>countB){
    printf("%lld",countA);
} else if (countB>countA){
    printf("%lld",countB);
} else{
    return 0;
}
    return 0;
}**/
/*#include<stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    long long arr[n];
    for(long long i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    long long sum_left = 0;
    for(long long i = a - 1; i > b - 1; i--){
        sum_left += arr[i];
    }
    long long sum_right = 0;
    for(long long i = a - 1; i < c - 1; i++){
        sum_right += arr[i];
    }
    if(sum_left > sum_right){
        printf("%lld", sum_left);
    } else{
        printf("%lld", sum_right);
    }
    return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main(){
float result,r,c,t;
int a,b;
scanf("%d%d",&a,&b);
r=sqrt((a*a)+(b*b))*0.5;
c=3.1416*r*r;
t = 0.5*a*b;
result=c-t;
printf("%.6f",result);

    return 0;
}*/
// AH: 
/**#include<stdio.h>
int main(){
int a,b,c,d,e;
printf("CONTEST_WON %d\n");
scanf("%d",&a);
printf("BLUE_CHAMPION %d\n");
scanf("%d",&b);
printf("CONTEST_HOSTED %d\n");
scanf("%d",&c);
printf("CLASS_TOOK %d\n");
scanf("%d",&d);
printf("TOP_CONTRIBUTOR %d\n");
scanf("%d",&e);
char arr[]


    return 0;
}
    **/
/*#include<stdio.h>
int main(){
long long a,b,c,d;
scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
if(c>=a && d>=b){
    printf("He is the thief!\n");
} else{
    printf("He is innocent!\n");
}

    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main(){
    int x,y,x1,y1,x2,y2;
    double distance1,distance2;
    scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
    distance1=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    distance2=sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
    if(distance1==distance2){
        printf("First\n");
    } else if (distance1>distance2){
        printf("Second\n");
    } else{
        printf("First\n");
    }

    return 0;
}  */
/*#include<stdio.h>
int main(){
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(x==y && y==z){
    printf("Yes\n");
} else if(x<=y && x<=z){
    printf("Yes\n");
} else{
    printf("No\n");
}



    return 0;
} */
/*#include<stdio.h>
#include<math.h>
int main(){
long long x,y,c1,c2;
scanf("%lld%lld%lld%lld",&x,&y,&c1,&c2);
double a,b,c,d,distance;
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
distance=sqrt(((x-c1)*(x-c1))+((y-c2)*(y-c2)));
if(distance == 0){
    printf("100\n");
} else if(distance<=a){
    printf("100\n");
} else if(distance<=b && distance>a){
    printf("75\n");
} else if(distance<=c && distance>b){
    printf("50\n");
} else{
    printf("25\n");
}
return 0;
}
*/
/*#include<stdio.h>
int main(){
    long long a,b;
    long long count;
    scanf("%lld%lld",&a,&b);
    long long arr[a];
    for(long long i=0;i<a;i++){
        scanf("%lld",&arr[i]);
        if (arr[i] == b);
        count = i;

    } if((count+2)==a){
        printf("Yeee! Argentina\n");
    } else{
        printf("Messi missed the penalty!\n");
    }



    return 0;
}
    */
/*#include<stdio.h>
int main(){
long long n,x;
long long box;
scanf("%lld%lld",&n,&x);
long long arr[n];
for(long long i=0;i<n;i++){
    scanf("%lld",&arr[i]);
    if(arr[i]%x==0){
box = i+1;
    }
}
box += 2;
if(box==n){
    printf("Yeee! Argentina\n");
} else{
    printf("Messi missed the penalty!\n");
}
    return 0;
}*/
/*
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n==0){
    printf("The Universe of our Hero\n");
} else if(n%2==0){
    printf("The Universe of Spider-Man 1\n");
} else{
    printf("The Universe of Spider-Man 2\n");
}

    return 0;
}
    */
/*#include<stdio.h>
int main(){
long long a,b,c;
scanf("%lld%lld%lld",&a,&b,&c);
a = ((a*b)+c);
printf("%d",a);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int arr[4];
    int count=0;
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            count++;
        }
    }
        if(arr[0]==1){
            printf("YES\n");
        }
        else if(count>1){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
     
    return 0;
}*/
/*#include<stdio.h>
int main(){
long long a,b;
scanf("%lld%lld",&a,&b);
long long arr[a];
int count=0;
long long box;
for(long long i=0;i<a;i++){
    scanf("%lld",&arr[i]);
} for(long long j=0;j<a;j++){
for(long long i=0;i<a;i++){
    if(i != j){
    box=arr[j]+arr[i];
    if(box>=b){
        count += 1;
        break;
    }
}
}
}
if (count >= 1){
    printf("YES\n");
}  else{
    printf("NO\n");
}
    return 0;
}*/

