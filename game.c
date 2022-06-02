#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, gusses, ngusses=1;
    srand(time(0));
    num = rand() % 100 + 1; // THis line Generate a random No between 1 to 100
    printf("The Number is %d \n ", num);

    do
    {
        printf("Enter the Number : \n");
        scanf("%d", &gusses);
        if (gusses > num)
        {
            printf("Lower Number Please \n");
        }
        else if (gusses < num)
        {
            printf("Higher number Please \n");
        }
        else
        {
            printf("You gusses No in %d attempt \n", ngusses);
        }
        ngusses++;

    } while (gusses != num);

    return 0;
}