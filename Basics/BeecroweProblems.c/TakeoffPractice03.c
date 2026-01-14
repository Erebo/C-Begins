/**#include<stdio.h>
int main(){
    int m,n,p;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m];
    int count=0;
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    } for(int i=0;i<m-1;i++){
        p = arr[i]+arr[i+1];
        if(p>n){
            count++;
        }
    }
printf("%d\n",count);
    
    return 0;
} **/
// cricket : 
/**#include<stdio.h>
int main(){
    int ball;
    int count=0;
    scanf("%d",&ball);
    int arr[ball];
    char 'O','N','W','C','R';
    for(int i=0;i<ball;i++){
        scanf("%d",arr[i]);
    } for(int i=0;i<ball;i++){
        if(arr[i]== (0 || 1 || 2 || 3 || 4 || 5 || 6 )){
            count += arr[i];
        } if(arr[i]== ('N','W')){
            count += 1;
        } if(arr[i] == ('O','R')){
            count += 0;
        }
    }
    printf("%d",count);


    return 0;
}
    **/
// printing char and int together ;
/**#include<stdio.h>
int main(){
char arr[10];
scanf("%9s",arr);
 for(int i=0;arr[i] != '\0';i++){
    printf("%d = %c\n",i,arr[i]);
}
    return 0;
}**/
/**#include<stdio.h>
int main(){
int x,y,z,count,result;
scanf("%d%d%d",&x,&y,&z);
x=x*y;
count=x/z;
result=x%z;
if(x%z == 0){
    printf("%d\n",count);
} else{
    printf("%d\n",count+1);
}


    return 0;
}**/
/**#include<stdio.h>
int main(){
int over,runs,o,r;
scanf("%d%d",&over,&runs);
o = over;
r = runs/o;
if(r>=6){
    printf("Yes\n");
} else{
    printf("No\n");
}

    return 0;
}**/
/**#include<stdio.h>

int main() {
    int age, weight;
    scanf("%d%d", &age, &weight);

    if (age < 3 || age >= 70) {
        printf("Free\n");
    } 
    else if (age >= 3 && age <= 12) {
        printf("20\n");
    } 
    else if (age >= 13 && age <= 64) {
        if (age >= 30 && age <= 40 && weight > 75) {
            printf("18\n");
        } else {
            printf("20\n");
        }
    } 
    else {
        printf("15\n");
    }

    return 0;
}
**/
/**#include<stdio.h>
int main(){
    long long a,b,c;
    scanf("%lld%lld",&a,&b);
    long long arr[a];
    for(int i=1;i<=a;i++){
        scanf("%lld",&arr[i]);
    } 
    printf("%lld",arr[b]);
    for(int i=b;i<a;i++){
        if(arr[i]<arr[i+1]){
            printf(" %lld",arr[i+1]);
        }
    }
    printf("\n%lld",arr[b]);
    for(int i=b;i>0;i--){
        if(arr[i]>arr[i-1]){
            printf(" %lld",arr[i-1]);
        }
    }
    return 0;
}**/ // wrong approach 

/// Problem - X : 
/// Wrong on test 03 : 
/** 
#include<stdio.h>
int main(){
long long a,b,highest;
scanf("%lld%lld",&a,&b);
long long arr[a];
for(int i=1;i<=a;i++){
    scanf("%lld",&arr[i]);
} 
highest = arr[b];
printf("%lld",highest);
for(int i=b;i<a;i++){
if(highest<arr[i+1]){
    highest = arr[i+1];
} else{
    continue;
}
printf(" %lld",highest);
}
highest = arr[b];
printf("\n%lld",highest);
for(int i=b;i>0;i--){
if(highest>arr[i-1]){
    highest = arr[i-1];
} else{
    continue;
}
printf(" %lld",highest);
}
    return 0;
}
*/
/**#include<stdio.h>
int main(){
    float Area,vumi,ucchota;
    scanf("%f%f",&Area,&vumi);
    ucchota=(2*Area)/vumi;
    printf("%.4f\n",ucchota);
    
    return 0;
}**/
/**#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    if(n%3==0){
        printf("DP\n");
    } else if (n%3==1){
        printf("Binary Search\n");
    } else{
        printf("Graph Theory\n");
    }
}**/
// So Drake team is in the third poition 
// at least 3 team have to solve at least 01 problem 
// if n=3 drake yes 
// if n=2 and 3 team done 01 then drake is yes 
// if n=1 drake is no for sure 
/**#include<stdio.h>
int main(){
int n,arr[5];
int count=0;
scanf("%d",&n);
for(int i=0;i<5;i++){
    int value;
    while(1){
        scanf("%d",&value);
    if(value>=0 && value<=12){
        arr[i]=value;
    }
    if(arr[i]>=1){
        count++;
    }
    break;
}
}
while(n !=0 && n<=3){ 
    if (n==1){
    printf("No\n");
    break;
} else if (n==2 && count>2){
    printf("Yes\n");
    break; 
} else if (n==2 && count<2){
    printf("No\n");
    break;
} else if (n==3 && count ==0 ){
    printf("No\n");
    break;
} else{
    printf("Yes\n");
    break;
}
}

    return 0 ;
}*///
/**#include<stdio.h>
int main(){
    int n, arr[5];
    int count = 0;
    scanf("%d", &n);
    for(int i = 0; i < 5; i++){
        int value;
        while(1){
            scanf("%d", &value);
            if(value > 0 && value <= 12){ 
                arr[i] = value;
                if(arr[i] >= 1){
                    count++;
                }
                break;
            }
        }
    }

    while(n != 0 && n <= 3){ 
        if(n == 1){
            printf("No\n");
            break;
        } else if(n == 2 && count > 2){
            printf("Yes\n");
            break; 
        } else if(n == 2 && count < 2){
            printf("No\n");
            break;
        } else if(n == 3 && count == 0){
            printf("No\n");
            break;
        } else{
            printf("Yes\n");
            break;
        }
    }

    return 0;
}**/
/**#include <stdio.h>

int main() {
    int n, arr[5];
    int count = 0;

    scanf("%d", &n);

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 1) {
            count++;
        }
    }
    if(n != 0 && n <= 3) {
        if (n == 1) {
            printf("No\n");
        } else if (n == 2 && count > 2) {
            printf("Yes\n");
        } else if (n == 2 && count < 2) {
            printf("No\n");
        } else if(n == 3 && count == 0){
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

    return 0;
}
**/
/**#include<stdio.h>

int main() {
    int n, arr[5];
    int count = 0;

    scanf("%d", &n); 
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 1) {
            count++;
        }
    }
    if(count > 2) {
        n++;
    }
    while(n != 0 && n <= 3) {
        if(n >= 3) {
            printf("Yes\n");
            break;
        } else {
            printf("No\n");
            break;
        }
    }

    return 0;
}**/
// Starting from point 01
// even - 1step back
// Odd 2 step back 
// every step count 1 second
// 1. step number 2. A obstacle numbers
// 3. B obstacle numbers 4. Obstacles point for A
// 5.Obstacles point for B
// 3<=N<=10^5,0<=X,Y<=N-2
/**#include<stdio.h>
int main(){
    long long steps;
    while(steps>=3){
        scanf("%lld",steps);
        break;
    }
long long A,B;
long long arrA[A],arrB[B];
while(A>=0 && A<=(steps-2)){
    scanf("%lld",A);
    break;
} while(B>=0 && B<=(steps-2)){
    scanf("%lld",B);
    break;
}


    return 0;
}
    **/
#include<stdio.h>
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

