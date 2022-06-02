#include<stdio.h>

int main(){
    int i = 1 , n =7 , factorial = 1;
    while( i <= n){
        factorial *=i;
        i++;
    }
    printf("Th Factorial of vale %d is %d \n " , n , factorial);
     return 0;
}