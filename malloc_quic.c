#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = malloc(6 * sizeof(float));
    for( int i = 0 ; i < 6 ;i++){
        printf("Enter the value of %d element \n", i+1);
        scanf("%f" , &ptr[i]);
    }
    for( int i = 0 ; i < 6 ;i++){
        printf("The value of element %d is :  %0.1f \n", i+1 , ptr[i]);
        
    }
     return 0;

}