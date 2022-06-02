#include <stdio.h>

int main()
{

    int rating;
    printf("Enter your rating(1-5) \n");
    scanf("%d", &rating);

    switch (rating)
    {

    case 1:
        printf("THank you for your rating 1 \n");
        break;

    case 2:
        printf("THank you for your rating 2 \n");
        break;

    case 3:
        printf("THank you for your rating 3 \n");
        break;

    case 4:
        printf("THank you for your rating 4 \n");
        break;

    case 5:
        printf("THank you for your rating 5 \n");

    default:
        printf("Your rating is invalid");
    }

    return 0;
}