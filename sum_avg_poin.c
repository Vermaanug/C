#include<stdio.h>

void sumandavg(int x , int y , int *sum , float *avg){
    *sum = x + y ;
    *avg = (float) *sum/2 ;
}

int main(){
    int a , b , sum ;
    float avg;
    a = 10 ;
    b = 90 ;
    sumandavg(a,b , &sum , &avg);
    printf("The sum of No is %d\n " , sum);
    printf("The average of No is %f\n " , avg);
     return 0;
}