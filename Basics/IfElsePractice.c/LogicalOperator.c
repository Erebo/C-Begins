#include<stdio.h>
int main(){
    char A;
    printf("Enter an Alphabet : ");
    scanf("%c",&A);
    if(A =='a'||A =='e'||A =='i'||A =='o'||A =='u' || A =='A'||A =='E'||A =='I'||A =='O'||A =='U'){
    printf("The Alphabet is Vowel");
    }
    else{
        printf("The Alphabet is Consonant ");
    }
    




    return 0;
}