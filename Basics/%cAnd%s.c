#include<stdio.h>
int main()
    {
        char name;
        printf("Enter your name : ");
        // Only use format specifier when your variable holds a real data or input 
        scanf(" %c", &name );// // space before %c to skip leftover newline
        printf("Your name is :%c\n",name);
        // %c only print single cahracter that's why we need to use %s           
        char name2[50];
        printf("Enter your name:\n ");
        scanf("%s",name2);// name2 is an array of chararcters or string so we can't use & with string if we use &name2 it will take the leftover of name1 and print 
        printf("Your name is : %s\n",name2);

        char name1[50];
        printf("Enter your name :\n ");
        scanf("%s",name1);          
        printf("Your name is : %s",name1); //%s expects a character array (string) but i gave a single character space so it doesn't taking any input 
        

        // here we are using scanf functions with string so we are unable to take new input in the name2 name1
        // in the scanf in name is only taking the first  character then the leftover is taken by name2 
        // name2 is taking all the part unless a space bar shows up 
        // the the next part of space bar is taken by the name1





        return 0;
    }          