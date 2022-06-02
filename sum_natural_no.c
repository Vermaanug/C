#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("ENter the value of n \n");
    scanf("%d", &n);
    i = 1;

    while (i <= n)
    {

        sum += i;
        ++i;
    }
    printf("Sum of First n natural no is %d\n ", sum);

    return 0;
}
