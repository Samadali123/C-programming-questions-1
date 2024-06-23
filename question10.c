// // write a c program to read the age of a xandidate and determine whether it
// is eligible for casting his/her own vote !\

#include<stdio.h>

int main(){
    int age;
    printf(" enter the age of a canddidate:\n");
    scanf("%i",&age);
    if(age>=18){
        printf(" he/she can cast her/his own vote !");

    } 
    else{
        printf(" he/she not eligible to  cast her/his own vote !");
    }

    return 0;
}