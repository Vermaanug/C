#include<stdio.h>

int main()
{
    float sub1 , sub2 , sub3 ;
    printf("Enter the  1st subject Marks \n");
    scanf("%f", &sub1);
    printf("Enter the  2nd subject Marks \n");
    scanf("%f", &sub1);
    printf("Enter the  3rd subject Marks \n");
    scanf("%f", &sub1);
    float sum =sub1 + sub2 + sub3 ;
    float per  = sum / 3.0 ;
    printf("Your Percentage is %f \n", per);
    return 0 ;

}