//(1)LUCKY NUMBER SEARCH : 
//Write a C program that asks the user to enter a list of integers (positive numbers only). The user will stop entering numbers when they input -1. The program should do the following:
//If a number is divisible by 7, skip it using continue.
//If a number is equal to 99, stop processing using break.
//Otherwise, print "Accepted: <number>".
//#include<stdio.h>
/* 
int main(){
    float a ; 
    printf("Enter postive numbers only (Use 0 to start Processing ) : ");
    for(a=0;a != -1;a++){ here you are using float float has some problems with int type numbers so it doesn't count -1 and the loop continues even if you have entered -1 
        scanf("%f",&a); the scanf stops whenever you put character it cannot read char so you have to use getchar() instead of scanf 
    }
   return 0;
} /* */
/*
#include<stdio.h>
int main (){
    int n,number[100];
        printf("Enter any Number (Enter O for Processing) :");
        for(int i = 0; i < 100 ; i++){
        scanf(" %d",&n);
        if(n == 0){
            printf("Thanks for all the inputs,Starting the process.....");
            break;
        }else if (n%2==0 || n%5==0 || n == 69){
            continue;
        } else {
            printf("Accepted : %d",n);
        }
        number[i]=n;

    }
    */
   #include <stdio.h>

    int main() {
    int number[100];  // Store up to 100 numbers
    int n;            // Temp input
    int count = 0;    // Count how many numbers entered

    printf("Enter numbers (Enter 0 to start processing):\n");

    // Step 1: Input
    for (int i = 0; i < 100; i++) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        number[count++] = n;  // Store and count
    }

    printf("Thanks for all the inputs, Starting the process...\n\n");

    // Step 2: Process only the entered numbers
    for (int i = 0; i < count; i++) {
        if (number[i] % 2 == 0 || number[i] % 5 == 0) {
            continue;
        }
        printf("Accepted: %d\n", number[i]);
    }

    return 0;
}

















