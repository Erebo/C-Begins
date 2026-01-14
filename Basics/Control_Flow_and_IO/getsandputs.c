//We use fgets() instead of scanf() not because scanf() can't read strings, but because fgets() is safer, and it can read full lines including spaces, while scanf() stops at whitespace and is risky for overflow.
#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    fputs("Enter your name : ",stdout);// here we can simply use printf()
    fgets(name,sizeof(name),stdin);
    size_t len=strlen(name);
    if(name[len-1]='\n'){
        name[len-1]='\0';
    }
    //fputs("Your name is : ",name,stdout); fputs cannot hold more than two information so if you want to use fputs then you need to use double fputs to print the same printf so , here printf is better 
    fputs("Your name is : ",stdout);//fputs always needs stdout 
    fputs(name,stdout);
    printf("\nYour name is : %s",name );

//// fputs cannot handle format specifiers, so we use it twice








    return 0;
}