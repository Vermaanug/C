#include <stdio.h>

float Force(int mass);

int main()
{
    float m;
    printf("Enter the value of mass in kgs \n");
    scanf("%f", &m);
    printf("The value of Force in Newton is %.2f\n", Force(m));

    return 0;
}

float Force(int mass)
{
    int result;
    result = mass * 9.8;
    return result;
}