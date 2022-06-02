#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a = 3, b = 4;
    printf("Enter the No : \n");
    scanf("%d", &a); //

    printf("Enter the No : \n");
    scanf("%d", &b);

    printf("The No before swap is %d and %d \n", a, b);
    swap(&a, &b);
    printf("The no after swap is %d and %d \n ", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}