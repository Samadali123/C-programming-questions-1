// accept marks of 4 subjrcts and calculate percentage 
// if percentage is below 35%-f 
// below 45% - d // below 55% - c // below 75% -B // above 75% - A
#include<stdio.h>

int main(){
    int chem,phy,maths,english;
    printf(" Enter the marks in all subjects :\n");
    scanf("%i %i %i %i",&chem,&phy,&maths,&english);
    float total = phy+chem+maths+english;
    float percentage = (total/400)*100;

   if(percentage>75 ){
    printf(" grade is A");

   }
   else if( percentage<75 && percentage>55){
    printf(" grade is B");
   }
  else if(percentage<55 && percentage>45){
    printf(" grade is C");

  }
  else if(percentage<45 && percentage>35){
    printf(" grade is D");
  }
else {
    printf(" grade is F !");
}
    return 0;
}

