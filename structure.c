#include <stdio.h>
#include<string.h>

struct employee
{
    int code;
    float Salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 07;
    e1.Salary = 11000;
    strcpy(e1.name, "Anurag");

    printf("The code of Employee e1 is : %d \n" , e1.code);
    printf("The Salary of Employee e1 is : %f \n" , e1.Salary);
    printf("The Name of Employee e1 is : %s \n" , e1.name);

    return 0;
}