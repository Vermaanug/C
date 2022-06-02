#include <stdio.h>

int main()
{

    int physics, maths, chemistry;
    float total;
    printf("Enter the Physics Marks : \n");
    scanf("%d", &physics);

    printf("Enter the maths Marks : \n");
    scanf("%d", &maths);

    printf("Enter the chemistry Marks : \n");
    scanf("%d", &chemistry);

    total = (physics + maths + chemistry) / 3;

    if ((total <= 105) && physics <= 35 && maths <= 35 && chemistry <= 35)
    {
        printf("You are Pass \n ");
    }
    else
    {
        printf(" You  are Fail \n");
    }

    return 0;
}