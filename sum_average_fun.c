#include<stdio.h>

int sum(int x , int y );

int average(int x , int y );

int main(){
    int a = 8 , b = 55 ;
    printf("The sum of two variable is %d \n" , sum(a,b));
    printf("The average of two variable is %d \n" , average(a,b));

     return 0;
}

int sum(int a , int b ){
    return a + b ;
}

int average(int a , int b ){
    return (a + b)/3;
}