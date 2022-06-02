#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float Salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the code of Employee e1 is: \n");
    scanf("%s", &e1.code);
    printf("Enter the Salary of Employee e1 is: \n");
    scanf("%f", &e1.Salary);
    printf("Enter the Name of Employee e1 is: \n");
    scanf("%s", e1.name);

    printf("Enter the code of Employee e2 is: \n");
    scanf("%s", &e2.code);
    printf("Enter the Salary of Employee e2 is: \n");
    scanf("%f", &e2.Salary);
    printf("Enter the Name of Employee e2 is: \n");
    scanf("%s", e2.name);

    printf("Enter the code of Employee e3 is: \n");
    scanf("%s", &e3.code);
    printf("Enter the Salary of Employee e3 is: \n");
    scanf("%f", &e3.Salary);
    printf("Enter the Name of Employee e3 is: \n");
    scanf("%s", e3.name);

    printf("The name of Employee E1 is %s\n", e1.name);
    printf("The Code of Employee E1 is %d\n", e1.code);
    printf("The salary of Employee E1 is %d\n", e1.Salary);

    printf("The name of Employee E1 is %s\n", e2.name);
    printf("The Code of Employee E1 is %d\n", e2.code);
    printf("The salary of Employee E1 is %d\n", e2.Salary);

    printf("The name of Employee E1 is %s\n", e3.name);
    printf("The Code of Employee E1 is %d\n", e3.code);
    printf("The salary of Employee E1 is %d\n", e3.Salary);

    return 0;
}
