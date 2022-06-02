#include<stdio.h>

float far(int cel);

int main(){
    float cel ;
    printf("ENter the cel to convert into fahrenheit \n");
    scanf("%f " , &cel );
    
    printf(" The temperatur of cel into fahrenheit are %f and %f \n" , cel , far(cel));
    
    return 0;
}

float far(int cel){
    int res;
    res = (float)( cel * 9/5) + 32;
    return res;
   
}