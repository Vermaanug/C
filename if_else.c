#include<stdio.h>

int main(){

    int age ;
    printf("Enter your age : \n");
    scanf("%d" , &age);

    if (age<=18 || age>=60){
        printf("You Cannot Drive \n");
    }
    else{
        printf("You Can Drive \n");
    }    
     return 0;
}