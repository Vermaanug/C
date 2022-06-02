#include <stdio.h>

int main()
{
    int a, b;
    int op;

    printf("Enter the Value of a : ");
    scanf("%d", &a);
    printf("Enter the Value of b : ");
    scanf("%d", &b);
    printf("1.addition \n2.substraction \n3.multipication \n4 .dividion\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("The addition of %d and %d is %d", a, b, a + b);
        break;
    case 2:
        printf("The substraction of %d and %d is %d", a, b, a - b);
        break;
    case 3:
        printf("The multipication of %d and %d is %d", a, b, a * b);
        break;
    case 4:
        printf("The division of %d and %d is %d", a, b, a / b);
        break;
    }

    return 0;
}