#include <stdio.h>

int main()
{
    int n , prime , i;
    printf("Enter the Numbers : \n");
    scanf("%d" , &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            i++;
            break;

                
        }
    }
    if(prime==0 ){
        printf("THis is not a Prime Number \n");
    }
    else{
        printf("THis is prime Numbers \n");
    }

    return 0;
}