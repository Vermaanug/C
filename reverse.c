#include <stdio.h>

int main()
{
    int num ;
    int rem, reverse = 0;
    printf("Enter The NUmber : ");
    scanf("%d", &num) ;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    printf("Reverse Numbers is : %d", reverse);
    return 0;
}