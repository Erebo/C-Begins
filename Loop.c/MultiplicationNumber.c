#include<stdio.h>
int main(){
    int n,m;
    retry:
    printf("Enter a Number :");
    scanf("%d",&n);
    for(int i = 0;i<=10;i++){
        m = n*i;
        printf("%d * %d = %d\n",n,i,m);
    }
    printf("\n");
     goto retry;

    return 0;
}
/* Don't use goto statement it's bad practice rather use while(1) infinite loop or for(;;) infinite loop 
#include<stdio.h>

int main(){
    int n, m;

    while(1){  // infinite loop
        printf("Enter a Number: ");
        scanf("%d", &n);

        for(int i = 0; i <= 10; i++){
            m = n * i;
            printf("%d * %d = %d\n", n, i, m);
        }

        printf("\n"); // Just for spacing
    }

    return 0;
}
*/