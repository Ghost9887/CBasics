#include <stdio.h>

//FUNCTIONS
//main is the function that the compiler looks for like in java for example
//it also has to be at the bottom always
//SYNTAX: TYPE NAME(PARAMS){} 


void myFunction(){
   printf("I just got executed\n");
}

void myNameFunction(char[] name){
  printf("Hello %s\n", name);
}

int mySumFunction(int a, int b){
  return a + b;
}

//FUNCTION DECLARATION(we can declare a function above the main function and define it later)
char[] getName(char[] name);

int main(){
  myFunction();
  myNameFunction("Jakub");
  mySumFunction(5, 5);
  getName("Dominika");
  reutrn 0;
}

char[] getName(char[] name){
  return name;
}
