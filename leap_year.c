#include <stdio.h>

int main()
{

    int leapyear;
    printf("Enter Year : \n");
    scanf("%d", &leapyear);

    if (leapyear % 400 == 0)
    {
        printf("This year is leap year \n");
    }
    else if (leapyear % 100 == 0)
    {
        printf("This year is not leap year \n");
    }
    else if (leapyear % 4 ==0){
        printf("This year is leap year\n");
    }
    else {
        printf("This year is not leap year \n");
    }

    return 0;
}