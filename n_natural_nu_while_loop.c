#include<stdio.h>

int main(){
    int n ;
    printf("Enter the value of n \n");
    scanf("%d" , &n);

    while(n<=10){
        printf("%d\n" , n);
        n++;
    }

     return 0;
}