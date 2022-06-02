#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you , char comp){
    // return 1 if you win , -1 if you lose , and 0 if draw 
    if ( you == comp){
        return 0 ;
    }

    if(you == 's' && comp =='g'){
        return -1 ;
    }
    else if(you == 'g' && comp =='s'){
        return 1;
    }
    if(you == 's' && comp =='w'){
        return 1 ;
    }
    else if(you == 'w' && comp =='s'){
        return -1;
    }
    if(you == 'g' && comp =='w'){
        return -1 ;
    }
    else if(you == 'w' && comp =='g'){
        return 1;
    }
}

int main(){
    char you , comp ;
    srand(time(0));
    int num = rand()%100 + 1;
    if (num < 33){
        comp = 's' ;
    }
    else if ( num > 33 && num < 66){
        comp = 'w' ;
    }
    else {
        comp = 'g' ;
    }

    printf("Enter 's' foe snake , 'w' for water , 'g' for gun : \n");
    scanf("%c" ,&you);
    int result = snakewatergun(you ,comp);
    printf("You chose %c and computer chose %c\n " , you, comp);
    if (result == 0){
        printf("Game Draw!\n");
    }
    else if(result==1){
        printf("You Win! \n");
    }
    else{
        printf("You lose! \n");
    }
     return 0;
}