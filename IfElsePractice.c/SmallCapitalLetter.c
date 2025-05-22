#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter : ");
    scanf("%c",&letter);// just using >= a is not enough it will iclude all the symbols that are not character 
    if(letter>='a' && letter<='z'){//<= z contatins all the character and exclude all the symbols 
        printf("It's in small letter ");
    } else if (letter>='A' && letter<='Z'){
        printf("It's in Capital letter");
    } else {
        printf("It's not a letter ");
    }









    return 0;
}