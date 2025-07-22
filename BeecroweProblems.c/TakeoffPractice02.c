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
#include<stdio.h>
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
}