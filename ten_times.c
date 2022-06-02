#include<stdio.h>

void change(int *x);

int main(){
    int a = 6 ;
    printf("THe Value of a is %d \n ", a);
    change(&a);
    printf("THe Value of a  after 10 times to its actual value is %d \n ", a);

     return 0;
}

void change(int *x){
    *x = *x * 10 ;
}