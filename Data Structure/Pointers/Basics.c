#include <stdio.h>
int main()
{
    int x = 10;
    int *y = &x;
    printf("%d\n", x);
    printf("%p\n", &x);
    printf("%p\n", y);
    printf("%d\n", *y);
    printf("%p\n", &y);
    return 0;
}
// The address of y is ("%p",y);
// The value of y is ("%d",&y);
// A pointer is a variable that stores the memory of another variable . 
// Instead of holding the direct value it point to the location in memory where the value is stored.