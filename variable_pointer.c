#include<stdio.h>

int main(){
    int a = 4 ;
    int *b = &a;
    int **c =&b;
    printf("The address of variable is %u\n", b);
    printf("The Value  of variable is %d\n", *b);
     return 0;
}