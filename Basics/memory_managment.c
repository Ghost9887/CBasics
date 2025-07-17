#include <stdio.h>
#include <stdlib.h>

//UNDERSTANDING MEMORY MANAGMENT IN C 
/*
Memory management is the process of handling how much memory a 
program uses through allocation, reallocation and deallocation
When you create a basic variable, C will automatically reserve space for 
that variable
In C you have to manage the memory yourself
Properly managing memory optimizes perfomance of the program so its useful
to know how to release memory that is no longer needed
*/


//ALLOCATING MEMORY
//The process of reserving memory is called allocation
//C has two types of memory {Static memory ; Dynamic memory}
//C automatically allocates memory for every variable when the program is compiled (ran)

int main(){
  
  //Static memory (always reserve what is given not whats needed)
  int students[20];
  printf("%zu\n", sizeof(students)); // prints 80 (4bytes for 1 int)

  //Dynamic memory (reserve only whats needed) 
  //Dynamic memory doesnt belong to a variable, it can only be accessed by pointers

  //The malloc has one parameter which determines the amount of memory to allocate
  int *ptr1, *ptr2;
  ptr1 = malloc(sizeof(*ptr1));

  //The calloc has two parameter 
  //amount -> specifies the amount of items to allocate
  //size -> specifies the size of each item
  ptr2 = calloc(1, sizeof(*ptr2));
  
  

  //ACCESSING MEMORY
  //Dynamic memory behaves like an array

  int *ptr3;
  ptr3 = calloc(4, sizeof(*ptr3));

  //write to the memory
  *ptr3 = 2;
  ptr3[1] = 4;
  ptr3[2] = 6;
  
  //read from the memory
  printf("%d\n", *ptr3);
  printf("%d %d %d\n", ptr3[1], ptr3[2], ptr3[3]);


  //REALOCATE MEMORY
  //If the amount we reserved is not enough we can allocate more memory

  int *ptr4, *ptr5, size;

  //allocate the memory
  size = 4 * sizeof(*ptr4);
  ptr4 = malloc(size);

  printf("%d bytes allocated to address: %p \n", size, ptr4);



  //DEALOCATE MMEORY
  //When you no longer need a block of memory you should deallocate items
  int *ptr6;
  ptr6 = malloc(sizeof(*ptr6));

  free(ptr6);
  ptr6 = NULL;
}



