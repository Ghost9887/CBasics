#include <stdio.h>

//MEMORY MANAGEMENT AND POINTERS



int main(){

  int myAge = 21;
  printf("%p\n", &myAge); //prints the address of the variable

  // & -> This is often called a pointer it stores the memroy address of a variable

  //A pointer is a variable that stores the memory address of that another variable

  int yourAge = 30;
  int* pointer = &yourAge;

  printf("%d\n", yourAge); //prints 30
  printf("%p\n", &yourAge); //print the address of the variable
  printf("%p\n", pointer); //prints the address of the variable
  printf("%d\n", *pointer); //prints the value at that address (30) 
  

  /*
  ARRAYS AND POINTERS
  When declaring a array you create a pointer to the first value of that array
  int array[] = {1, 2, 3, 4} if you do &array and &array[0] they will be at the same address
  which means we can do printf("%d", *array); which will print in this case 1
  to access different one we can do *array + 1; which will print in this case 2 
  etc...
  */
  
  int arr[] = {1, 2, 3, 4};
  printf("%d\n", *arr); //prints 1
  printf("%d\n", *(arr + 1)); //prints 2

  return 0;
}
