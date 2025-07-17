#include <stdio.h>

//ENUMS
//Enum is a special type that represents a group of constants

enum level {
  LOW,
  MEDIUM,
  HIGH
};


int main(){
  
  //creating a instance of the enum
  enum level myEnum;

  //assign a value to the enum (MUST BE A ITEM IN THE ENUM)
  myEnum = MEDIUM;

  //print the enum
  printf("%d\n", myEnum); //prints 2 (LOW = 1, MEDIUM = 2, HIGH = 3)
  
  return 0;
}
