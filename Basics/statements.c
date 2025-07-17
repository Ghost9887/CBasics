#include<stdio.h>

//STATEMENTS

int main(){

  //IF/ELSE statement
  int a = 5;
  int b = 10;

  if(a < b){
    printf("b is bigger\n");
  }
  else{
    printf("a is bigger\n");
  }
  
  //SHORTHAND IF
  (a < b) ? printf("b is bigger\n") : printf("a is bigger\n");

  
  //SWITCH statement

  int day = 1;
  switch (day) {
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thursday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    default:
      printf("Nothing\n");
      break;

    }

    
  //WHILE statement
  int turns = 0;
  while(turns < 10){
      printf("turns: %d\n", turns);
      turns++;
  }

  //FORLOOP statement
  for(int i = 0; i < 10; i++){
      printf("%d\n", i);
  }


  //ARRAYS statement
  int numArr[] = {25, 10, 5};
  printf("%d\n", numArr[0]);

  // To get the size of a array we have to use a special formula
  printf("%zu\n", sizeof(numArr)); //prints 20 as it returns the size of the entire array in bytes
  
  //Formula
  int length = sizeof(numArr) / sizeof(numArr[0]); // this does 20 / 4 (size of one int)
  printf("%d\n", length);


  //STRINGS (they are basically char[] C doesnt have a string type)
  char greetings[] = "Hello, World!";
  printf("%s\n", greetings);

  
  //USER INPUT
  int input;
  printf("Type a number: \n");
  scanf("%d", &input);
  printf("Number: %d\n", input);



  return 0;
  



}
