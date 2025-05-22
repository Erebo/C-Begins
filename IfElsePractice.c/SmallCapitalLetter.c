#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter : ");
    scanf("%c",&letter);
    if(letter>='a' && letter<='z'){
        printf("It's in small letter ");
    } else if (letter>='A' && letter<='Z'){
        printf("It's in Capital letter");
    } else {
        printf("It's not a letter ");
    }









    return 0;
}