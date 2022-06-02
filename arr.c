#include<stdio.h>

int main(){
    int i[3] ={1 , 4 ,7 };
    int *k = i;
    printf("The value of i[0] is %u \n" , i);
    *k++;
    printf("The value of i[0] is %u \n" , i);

     return 0;
}