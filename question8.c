// write a c program to check whether a given number is positive or not !
#include<stdio.h>

int main(){
    int number;
    printf(" enter the number :\n");
    scanf("%i",&number);
    if(number>0){
        printf(" number is positive !");

    }
    else{
        printf(" number is negative !");
        
    }
    return 0;
}