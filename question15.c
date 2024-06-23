// write a c prpgram to check whther a given alphabet is vowel or not 
#include<stdio.h>

int main(){
    char alphebt;
    printf(" Enter alphabet:\n");
    scanf("%c",&alphebt);

    switch(alphebt)
    {
    case 'a': printf(" a is a wovel !");
        break;

    case 'e': printf(" e is a wovel !");
    break;

    case 'i': printf(" i is a wovel !");
    break;

    case 'o': printf(" o is a wovel !");
    break;

    case 'u':printf(" u is a wovel !");
    break;

    case 'A': printf(" A is a wovel !");
        break;

   case 'E': printf(" E is a wovel !");
    break;

    case 'I': printf(" I is a wovel !");
    break;

    case 'O': printf(" O is a wovel !");
    break;

    case 'U':printf(" U is a wovel !");
    break;
    
    default:printf(" consonats !");
        break;
    }
    return 0;
}