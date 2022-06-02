// write a program to find grade of student give his marks below ;
#include <stdio.h>

int main()
{

    int marks;
    printf("Enter your Marks : \n");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your Grade is A \n");
    }
    else if (marks >= 80)
    {
        printf("Your Grade is B \n");
    }
    else if (marks >= 70)
    {
        printf("Your Grade is C \n");
    }
    else
    {
        printf("Your are Fail");
    }

    return 0;
}