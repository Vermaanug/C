#include<stdio.h>

void printtable( int *multi , int num , int n){
    for ( int i = 0; i < n; i++)
    {   
        multi[i]= num*(i+1);
        
    }
    for ( int i = 0; i < n; i++)
    {   
        printf("%d X %d = %d \n", num , i+1 ,multi[i]);
        
    }
    
}

int main(){
    int multi[3][10];
    printtable(multi[0], 2 , 10);
    printtable(multi[1], 7 , 10);
    printtable(multi[2], 9, 10);
     return 0;
}