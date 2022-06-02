#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Numbers \n");
    scanf("%d", &num);
    printf("Divisibility test return: %d", num % 97);

    return 0;
}