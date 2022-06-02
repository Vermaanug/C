#include <stdio.h>

int main()
{

    int num1, num2, num3, num4;
    printf("Enter the 1st Number \n");
    scanf("%d", &num1);

    printf("Enter the 2st Number \n");
    scanf("%d", &num2);

    printf("Enter the 3st Number \n");
    scanf("%d", &num3);

    printf("Enter the 4st Number \n");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("%d is Big \n", num1);
            }
            else
            {
                printf("%d is big \n ", num4);
            }
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num4)
        {
            printf("%d is big \n", num2);
        }
        else
        {
            printf("%d is big \n", num4);
        }
    }
    else if (num3 > num4)
    {
        printf("%d is big  \n", num3);
    }
    else
    {
        printf("%d is big \n ");
    }

    return 0;
}
