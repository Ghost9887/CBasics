#include <stdio.h>
#include <stdlib.h>


struct list{
  int *data;
  int numItems;
  int size;
};

void addToList(struct list *myList, int item);

int main(){
  
  struct list myList;
  int amount;

  //create a list and start with enought space for 10 items
  myList.numItems = 0;
  myList.size = 10;
  myList.data = malloc(myList. size * sizeof(int));

  //find out if memory allocation was successful
  if (myList.data == NULL){
    printf("Memory allocation failed");
    return 1; //exits the program
  }

  //add any number of items to the list specified by the amount variable
  amount = 100;
  for(int i = 0; i < amount; i++){
    addToList(&myList, i + 1);
  }

  //Display the contents of that list
  for(int i = 0; i < myList.numItems; i++){
    printf("%d , ", myList.data[i]);
  }

  //free the memory when its not longer needed
  free(myList.data);
  myList.data = NULL;

  return 0;
}


void addToList(struct list *myList, int item){

  //if the list is full resize the memory to fit 10 more items
  if(myList->numItems == myList->size){
    myList->size += 10;
    myList->data = realloc(myList->data, myList->size * sizeof(int));
  }

  //add the items to the end of the list
  myList->data[myList->numItems] = item;
  myList->numItems++;

}
