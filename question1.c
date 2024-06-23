
// write a program that prints the perimeter of a rectangle 
// to take its height and width as input 
#include<stdio.h>

int main(){
    int height,width;
    printf(" enter the height :\n");
    scanf("%i",&height);
    printf(" enter the width:\n");
    scanf("%i",&width);
    int perimeter = 2*(height+width);
    printf(" perimter of rectangle : %i",perimeter);
    return 0;
}

