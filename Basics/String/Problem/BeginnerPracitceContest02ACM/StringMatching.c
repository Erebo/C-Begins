#include <stdio.h>
#include <string.h>

int main() {
    char text[1000001], pattern[1000001];
    scanf("%s", text);
    scanf("%s", pattern);

    int n = strlen(text);
    int m = strlen(pattern);
    int count = 0;

    // Check all substrings of length m
    for (int i = 0; i <= n - m; i++) {
        int found = 1;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
