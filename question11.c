// write a c program to read the values of an integer m and display the value of n is 1
// when m is larger than 0 n is 0 when m is 0 and n is -1 when m is 0
#include<stdio.h>

int main(){
    int m;
    printf(" Enter the interger values of m :\n");
    scanf("%i",&m);
    if(m>0){
        printf(" n is 1 ");        
    } 
    else if(m<0){
        printf("n is -1");
    }
    else if(m==0)
    {
        printf( " n is 0");      
    }
    else{
        printf(" n is wrong integer !");
    }
    return 0;
}