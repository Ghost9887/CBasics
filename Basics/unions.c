#include <stdio.h>


//UNIONS 
//Similair to Structs but all members have the same memory
//so they can only be used one at a 19:29


union myUnion {
  int myNum;
  char myLetter;
  char myString[30];
};


int main(){

  //create the instance of the union
  union myUnion u1;

  u1.myNum = 10;

  //Since this is the last value written, myNum no longer holds 10 - its value is now invalid
  u1.myLetter = 'A';

  printf("%d\n", u1.myNum); //This value is no longer reliable 
  printf("%c\n", u1.myLetter); //prints A

  return 0;
}
