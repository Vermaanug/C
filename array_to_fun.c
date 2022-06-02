#include<stdio.h>

void printarray(int *ptr , int n){
    for(int i =0 ;i < n ; i++){
        printf("The value of element is %d is %d\n" , i+1 , *(ptr+i));

    }
}
 
int main(){
    int ary[] ={1 , 3,6, 5 , 6,5, 7};
    printarray(ary , 7);
    
     return 0;
}