#include <stdio.h>

int main()
{
    int a = 3;
    int *b = &a;
    printf("The Value of a is %d\n", a);
    printf("The address of a is %u\n", &a);
    printf("The value  of a is %d\n", *b);
    printf("The address of is %u\n ", &(*b));
    return 0;
}