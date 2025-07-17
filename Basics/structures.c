#include <stdio.h>
#include <string.h>

//STRUCTURES 
//Structures are a way to group several variables together into one place
//Unlike an array a struct can contain many different types(int, float, char)
//Structs cant handle arrays but for strings there is a work around


struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

struct Car{
  char brand[50];
  int year;
};


void updateYear(struct Car *c);

int main(){

  //create a structure variable of myStructure called s1
  struct myStructure s1;
  struct myStructure s2;

  //Assign variables to this struct instance
  s1.myNum = 10;
  s1.myLetter = 'f';
  strcpy(s1.myString, "hello");

  s2.myNum = 15;
  s2.myLetter = 'g';
  strcpy(s2.myString, "world");

  printf("%d\n", s1.myNum);
  printf("%c\n", s1.myLetter);
  printf("%s\n", s1.myString);
  printf("%d\n", s2.myNum);
  printf("%c\n", s2.myLetter);
  printf("%s\n", s2.myString);


  //STRUCUTRES AND POINTERS
  //Instead of copying a whole structure we can just pass a pointer 
  
  struct Car car = {"Toyota", 2020};

  //Declare a pointer to the struct
  struct Car *ptr = &car; 

  //Access the members using the -> operator
  printf("Brand: %s\n", ptr->brand); //prints Toyota
  printf("Year: %d\n", ptr->year); //prints 2020
  
  
  //PASSING POINTERS TO A STRUCT IN FUNCTION
  struct Car car2 = {"Seat", 2003};
  updateYear(&car2);

  printf("Brand: %s\n", car2.brand);
  printf("Year: %d\n", car2.year);


  return 0;
}

// We pass a pointer to the address of the struct object instead of passing and entire struct object(reuse)
void updateYear(struct Car *c){
  c->year = 2025;
}
