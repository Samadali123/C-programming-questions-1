// write a c program to check whether the given number is even or odd !
#include<stdio.h>

int main(){
    int number;
    printf(" enter the number :\n");
    scanf("%i",&number);
    if(number%2==0){
        printf(" even !");

    }
    else{
        printf(" odd !!!");
        
    }
    return 0;
}