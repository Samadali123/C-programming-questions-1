// write a program in c that takes minutes as input,
// and displays the total total number of hours and minutes


#include<stdio.h>

int main(){
    int minutes;
    printf("enter a total minutes : ");
    scanf("%i", &minutes);

    int  renainingminutes = minutes%60;
    printf(" hours is %i",minutes/60);
    printf(" remianing time in minutes is %i:\n",  renainingminutes);
    

    return 0;
}