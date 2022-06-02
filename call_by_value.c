#include<stdio.h>

int sum(int x ,int y);

int main(){
    int a = 3 , b= 6;
    printf("The Sum of 3 and 6 is %d\n" , sum(a,b));
     return 0;
}
int sum(int x ,int y){
    int a = 7 , b = 5 ;
    return x + y ;
}