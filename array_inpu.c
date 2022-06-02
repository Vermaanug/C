#include<stdio.h>

int main(){
    int marks[4];
    printf("Enter the 1st subject marks \n");
    scanf("%d" , &marks[0]);
    printf("Enter the 2nd subject marks \n");
    scanf("%d" , &marks[1]);
    printf("Enter the 3rd subject marks \n");
    scanf("%d" , &marks[2]);
    printf("Enter the 4th subject marks \n");
    scanf("%d" , &marks[3]);

    printf("The Marks of 1st subject is %d \n" , marks[0]);
    printf("The Marks of 2nd subject is %d \n", marks[1]);
    printf("The Marks of 3rd subject is %d \n", marks[2]);
    printf("The Marks of 4th subject is %d \n", marks[3]);
    
     return 0;

}