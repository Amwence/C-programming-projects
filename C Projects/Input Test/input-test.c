#include <stdio.h>

int main() {

  //declares a string size of 100
  char str[100];
  
  //creates variable i
  int i;
  
  //prints Enter value
  printf("Enter a value:");

  // takes input %d (double)
  // points to variable to store input which is the i we declared earlier
  scanf("%d", &i);
  
  //prints variable stored in i  after string
  printf("\nYou entered: %d\n", i);
}