#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter the 1st No \n");
    scanf("%d", &a);
    printf("Enter the 2nd No \n");
    scanf("%d", &b);

    printf("The sum of Two No is %d \n", sum(a, b));

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}