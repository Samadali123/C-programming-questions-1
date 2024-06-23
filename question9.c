// wrute a c program to check whether a given year is a leap year
#include<stdio.h>
int main()
{
    int year;
    printf(" year batao:\n");
    scanf("%i",&year);
    
    if(year%400==0){
        printf(" its a leap year !");
    }
    else if(year%100==0){
        printf("not a leap year !");
    }
    else if(year%4==0){
        printf(" its a leap year !");
    }
    else {
        printf(" not a leap year !");
    }
    return 0;
}