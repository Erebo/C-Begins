/*#include<stdio.h>
int main(){
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        sum += i;
        if(i<n){
            printf("%d+",i);
        } if(i=n){
            printf("%d=",i);  
        }
    }
    printf("%d",sum);

    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,multi=1;
    scanf("%d",&n);
    for(int i = n;i>=1;i--){
        multi *= i;
    }
    printf("%d",multi);
    
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,i,sum;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        sum = n*i;
        printf("%d*%d=%d\n",n,i,sum);
    }

    return 0 ;
}*/
/*#include<stdio.h>
int main(){
    int n,remainder;
    scanf("%d",&n);
    while(n != 0){
        remainder = n%10;
        n = n/10;
        printf("%d",remainder);
    }
    
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,count=0,temp;
    scanf("%d",&n);
    temp = n;
    while(temp != 0){
        temp /= 10;
        count++;
    }
    printf("%d",count);

    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,sum=0,r;
    scanf("%d",&n);
    while(n != 0){
        r = n%10;
        sum += r;
        n = n/10;
    }
    printf("%d",sum);
    
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&n);
    } if( n<1){
        printf("N");
    } else if (n%2 == 0){
        printf("E");
    } else{
        printf("O");
    }

    return 0;
}*/
/*#include <stdio.h>
int main() {
    int n, num, largest, smallest;
    scanf("%d", &n);
    scanf("%d", &num); // first number
    largest = smallest = num;

    for(int i = 2; i <= n; i++) {
        scanf("%d", &num);
        if(num > largest) {
            largest = num;
        } else if(num < smallest) {
            smallest = num;
        }
    }
    printf("Largest = %d, Smallest = %d", largest, smallest);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,arr[n],sum=0;
    float avg;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    avg = (float)sum/(n+1);
    printf("%.2f",avg);
    
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,max,min,Diff;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    max=min=arr[0];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        } if(min>arr[i]){
            min=arr[i];
        }
    }
        Diff = max-min;
        printf("%d",Diff);
    
    


    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
     arr[0]=0;
     arr[1]=1;
     printf("%d\n",arr[0]);
     if(n>1){
        printf("%d\n",arr[1]);
     }
    for(int i=2;i<n;i++){
        arr[i]=arr[i-2]+arr[i-1];
        printf("%d\n",arr[i]);
    }

    return 0 ;
}*/
/*#include<stdio.h>
int main(){
    int m,n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Search for : ");
        scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(arr[i]==  m){
            count ++;
            printf("The Position of m(%d) are = %d\n",m,i);
        }
    }
    printf("%d",count);

    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,m,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        sum += m;
    }
    printf("A total of %d packages delivered",sum);

    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,t,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("A total of %d packages deliverd",sum);
    scanf("%d",&t);
    printf("Location with more than %d pacakages :\n",t);
    for(int i=1;i<=n;i++){
        if(arr[i]>t){
            printf("Location %d:%d Packages\n",i,arr[i]);
        }

    }

    return 0;
}
*/
#include<stdio.h>
int main(){
    int n,num,p,prime=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num);
        for(int i =1;i<=num;i++){
            scanf("%d",&p);
            for(int i=2;i<p;i++){
                if(p%2 ==0){
                    prime ++;
                }
            }
        }
        printf("%d %d",prime,5-prime);
    }



    return 0;
}


