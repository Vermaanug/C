#include<stdio.h>

int main(){
    // char st[]={'A','n','u','r','a','g','\0'};
    char st[]= "Anurag";
    char *ptr =st;
    while (*ptr!='\0'){
        printf("%c" , *ptr);
        ptr++;
    }
    
     return 0;
}