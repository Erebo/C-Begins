/** 0,1,2,3,4,5,6
 *  0 || >8 - Papua New Guinea Wins!
 * 1-6 - Uganda Wins!
 * 7 - Super Over Decides!**/
/**#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
if (x == 0 || x>=8 ){
    printf("Papua New Guinea Wins!\n");
} else if(x == 7){
    printf("Super Over Decides!\n"); 
} else{
    printf("Uganda Wins!\n");
}
    return 0;
}
**/
// 2,4,8,16,32,64 
/**#include<stdio.h>
int main(){
int n,m ;
int match = 0;
scanf("%d",&n);
for(int i=0;i<=n;i++){
    m = 1<<i;
    if(n == m){
        match++;
    }
} 

if(match == 0){
    printf("HailaYehKyaHua\n");
} else{
    printf("Ferocious Angry Fighter\n");
}

    return 0;
}**/

/**#include<stdio.h>
int main(){
int n,m;
int count = 0;
scanf("%d",&n);
for(int i=0;;i++){
    m = 1<<i;
    if(m>n){
        break;
    } if(n==m){
        count++;
    }
}
if(n == 1) count = 0; 
if(count == 0){
    printf("HailaYehKyaHua\n");
} else{
    printf("Ferocious Angry Fighter\n");
}
    return 0;
}**/
/**#include<stdio.h>
int main(){
int n,m,result; 
scanf("%d%d",&n,&m);
result = n/m;
printf("%d\n",result);   

    return 0;
}**/
//N - 2<= N <= 10^6 , 0 <= A<=10^9,product remain unchanged 
/**#include<stdio.h>
int main(){
int n,i;
int count =0 ;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

while(1){
    if(arr[i]==0){
        count=1;
        break;
    }
    if(arr[i]==1){
        count++;
        break;
    } else{
        break;
    }
    i++;
}
}

if(n == 1){
    count = 0;
}
if(count==1){
    printf("YES\n");
} else{
    printf("NO\n");
}
    return 0;
}**/


// n>=20:Healthy n<=10 :Infected else Need Checkup
/**#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n<=10){
    printf("Infected\n");
} else if (n>=20){
    printf("Healthy\n");
} else{
    printf("Need Checkup\n");
}
    return 0;
} **/
// N - amount of money 
// X - White cows 
// 0 - white , 1- black 
// 10
// 1-1,3-3
// 0 jey number e thakbe seta calculate kore N taka diye koyta kina jay dekhte hobe 
#include<stdio.h>
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
            if(count >= taka){
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