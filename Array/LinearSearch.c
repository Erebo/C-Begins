#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int search;
    scanf("%d", &search);

    int found = -1;
    for (int j = 0; j < n; j++) {
        if (arr[j] == search) {
            found = 0;
            break;
        }
    }

    if (found == 0) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}
