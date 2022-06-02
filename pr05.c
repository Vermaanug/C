#include<stdio.h>

void reverse(int *ptr , int n){
    for( int i = 0 ; i < (7/2) ; i ++){
        int temp;
        temp = ptr[i];
        ptr[i] = ptr[7-i-1];
        ptr[7-i-1] = temp ;
    }
}

int main(){
    int an[] = { 2, 4, 5,6 , 8, 7, 8};
    reverse(an , 6);
    for( int i = 0 ; i < 7 ; i ++){
        printf("The value of %d element is %d \n", i+1 , an[i]);

    }
    
    return 0;
}