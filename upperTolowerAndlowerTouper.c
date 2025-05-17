#include<stdio.h>
int main(){
    char character;
    printf("Enter a Lower case character : ");
    scanf("%c",&character);
    printf("Upper case character of your input is : %c\n",character-32);
    char character1;
    printf("Enter a Upper case character :");
    scanf(" %c",&character1);
    printf("Lower case character of your input is : %c",character1+32);
//classic scanf problem is when you type a letter ex: P , you type two things (1)The letter P and (2) And Enter
//Enter basically count as \n; the first scanf count the first letter P but the \n is still leftout in the input action this is called"THE INPUT BUFFER"
//so the second scanf print the \n andso scanf don't wait for the user input and print the /n 
//to solve this issue we need to put a space before the %c of the 2nd scanf 
//The space means:

//“Ignore any whitespace (spaces, tabs, newlines) before reading the next character.”
//Only the first %c input can be without space in scanf.

//All subsequent %c inputs should have a space before %c like " %c" to avoid reading leftover newlines.

//This ensures each input waits for you to type a fresh character.






    return 0; 
}