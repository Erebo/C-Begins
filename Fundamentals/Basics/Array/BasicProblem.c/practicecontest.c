//01
// #include<stdio.h>

// int main(){
//     int n, max;

//     scanf("%d",&n);

//     int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     max = arr[0];

//     for(int i=1;i<n;i++){
//         if(max <= arr[i]){
//             max = arr[i];
//         }
//     }

//     printf("%d",max);

//     return 0;
// }

//02
// 

//03
// #include<stdio.h>
// int main(){
// int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     if(n % i == 0 ){
//         printf("%d\n",i);
//     }
// }


//     return 0;
// }

//04
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char word[100];
//     scanf("%s",word);
//     int sum=0;
//     int n = strlen(word);
//     for(int i=0;i<n/2;i++){
//         if(word[i]==word[n-i-1]){
//             sum++;
//         }
//     }
//     if(sum==n/2){
//         printf("Yes\n");
//     } else{
//         printf("No\n");
//     }

//     return 0;
// }

//05
