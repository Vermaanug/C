#include<stdio.h>

int main(){
    int j = 10 ;
    int *k = &j ;
    printf("The address of j is %u\n " , k);
    *k++;
    printf("The address of j is %u\n " , k);
     return 0;
}