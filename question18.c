// q-18
// wap to swap two variables without using third variables !
#include<stdio.h>
int main()
{
    int a=10;// 10
    int b=20;// 20
    a= a+b;// 30
    b=a-b;// 10
    a=a-b;// 20
    
    
    printf("a =%i\n",a);
    printf("b=%i",b);
    
    return 0;
    
}