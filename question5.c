 // write a c program that converts km into miles per hr
#include<stdio.h>
int main(){
    int km;
    printf(" enter km per hr :\n");
    scanf("%i",&km);
    float miles = (float)km/1.609;
    printf(" km in miles per hr is %.2f",miles);
    return 0;
}