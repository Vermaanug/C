#include<stdio.h>

int main(){
    int array[10];
    int *ptr = &array[0];
    ptr = ptr + 2;
    if(ptr==&array[2]){
        printf("These point to the same location\n");
    }
    else{
        printf("These doen not point to the same location \n");
    }

    
   
     return 0;
}