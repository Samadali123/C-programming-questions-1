// write a c program to calculate profit and losss on a transaction accept cost price
// and selling price from user !
#include<stdio.h>

int main(){
    int costprice,sellingprice;
    printf(" Emter the cost price:\n");
    scanf("%i",&costprice);
    printf(" Emter the selling price:\n");
    scanf("%i",&sellingprice);
    if(sellingprice>costprice){    
        printf(" profit ");
    }
    
    else {
        printf(" loss  !");
        
    }

    return 0;
}