// write a c program that takes hours as input and minutes , and calculate
// the total number of minutes 

#include<stdio.h>
// #include<stdlib.h>

int main(){
    int hours;
    int minutes;
    printf(" enter the hours :\n");
    scanf("%i",&hours);

    // System('clear');

    printf(" enter the minutes:\n");
    scanf("%i",&minutes);
    printf("  total time in minutes is %i ", hours*60+ minutes);

    return 0;
}