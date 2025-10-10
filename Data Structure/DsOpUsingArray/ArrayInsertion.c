#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    int replace;
    scanf("%d%d", &pos, &replace);
    size += 1;
    pos -= 1;
    for (int i = size - 1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = replace;
    printf("New Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}