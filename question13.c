#include<stdio.h>
int main(){
    
  
  
    int a;
    printf("enter number 1");
    scanf("%i", &a);
    int b;
    printf("enter number 2");
    scanf("%i", &b);
    
    int c;
    printf("enter number 3");
    scanf("%i", &c);
    
    
    
    if(a>b){
        if(a>c){
            printf("a sabse bada");
        }
        else{
            printf("c sabse bada");
        }
    }
    
    
    else if(a == b &&  a == c &&  b ==c){
        printf("all are same");
    }
    
    
    else {
        if(b>c){
            printf("b sabse bada");
        }
        
        else{
            printf("c sabse bada");
        }
    }
   return 0;
   
}