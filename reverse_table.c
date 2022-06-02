#include<stdio.h>

int main(){
    int n , i ;
    printf("Enter the No to Print multiplication table \n");
    scanf("%d" , &n);

    for( i= 10 ; i  ; i--){
        printf("%d * %d = %d \n" , n , i , n * i);
    }
}