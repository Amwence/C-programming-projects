# scanf()

- Like printf(), scanf() uses a control string followed by a list of arguments
  - Control string indicates the destination data type for the input stream of characters

- The printf() function uses variable names, constants, and expressions as its argument list
- The scanf() function uses pointers to variables
  - you do not have to know anything about pointers to use the function

## Remember these 3 rules about the scanf() function:

1. Returns the number of items that it successfully reads

2. If you use scanf() to read a value for one of the basic variable types we've discussed, precede the variable name with an &
  - integer -  %int
  - float - %float
  - double - %d

3. If you use scanf() to read a string into a character array, don't use an &


- The scanf() uses whitespace (newlines, tabs, and spaces) to decide how to divide the input into two separate fields
- scanf() is the inverse of printf(), which converts integers, floating-point numbers, characters, and C strings to text that is to be displayed on screen

## scanf() example

#include <stdio.h>
int main() {
  char str[100];
  int i;

  printf("Enter a value:");
  scanf("%s%d", str, &i);

  printf("\nYou entered: %s%d",str,i);

  return 0;
}

When a program uses scanf to gather input form the keyboard, it waits for you to input some text
  - when you enter some text and press enter, then program proceeds and reads the input

Remember, scanf() expects input in the same format as you provided %s and %d
  -you have to provide valid inputs like "string integer"