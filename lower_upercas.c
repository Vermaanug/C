#include<stdio.h>

int main(){
    //93 - 122 = a-z  ASCII Character
    char ch;
    printf("Enter the character");
    scanf("%c" , &ch);

    if (ch<=122 && ch>=93){
        printf("It is lowercase \n");
    }
    else{
        printf("It is Uppercase \n");
    }
    
     return 0;
}