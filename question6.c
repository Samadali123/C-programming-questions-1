// write a c programs to accept two integers and check whether they are equal
// or not !
#include<stdio.h>

int main(){
    int number1;
    int number2;
    printf(" enter number 1:\n");
    scanf("%i",&number1);
    printf(" enter the number 2:\n");
    scanf(" %i",&number2);
    if(number1==number2){
        printf(" they are same !");

    }
    else{
        printf(" they are not same !!!!");
        
    }
    return 0;
}