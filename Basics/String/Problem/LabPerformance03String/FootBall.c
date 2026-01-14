#include <stdio.h>
#include <string.h>

int main(){
    char digits[10001];
    scanf("%s", digits);
    int count = 1;

    for(int i = 1; digits[i] != '\0'; i++){
        if(digits[i] == digits[i-1]){
            count++;
            if(count >= 7){
                printf("YES\n");
                return 0;
            }
        } else {
            count = 1;  
        }
    }
    printf("NO\n");
    return 0;
}
