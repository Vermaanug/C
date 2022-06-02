// C program to check  whether is Number is Even or Odd 
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Number: \n");
    scanf("%d", &a);  

    if (a % 2 == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is odd \n");
    }
    return 0;
}