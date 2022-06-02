#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float Salary;
    char name[10];
};


int main(){
    struct employee e1 ;
    struct employee *ptr ;
    ptr =&e1 ;
   //  (*ptr).code = 11 ;  or you can also write : ptr -> code =11 ;
    ptr->Salary = 11 ;
    printf("%d",  e1.Salary);
    
     return 0;
}