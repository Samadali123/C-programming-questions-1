// write a c program to accept the height if a person in cm 
// categorize the person acc to their height if below 150 he is dwarf
// if he is above 150 and below 200 he is average
// if he is above 200 m he is a tall person!
#include<stdio.h>

int main(){
    int height;
    printf(" Emter the height of a person !");
    scanf("%i",&height);
    if(height>200){
        printf(" considered as tall !");

    }
    else if(height>150 && height<200){
        printf(" considered as average height !");

    }
    else if(height<150){
        printf(" considered as dwarf heighted man !");

    }
    else {
        printf("nahi pata !");
    }
    return 0;
}