# Header Files

- Header files define information about some of the functions that are provided by that file
  - stdio.h is the standard C library header and provides functionality for displaying output, among many other things
  - We need to include this file in a program when using the  printf() function from the standard library
  - stdio.h contains the information that the compiler needs to understand what printf() means, as well as other functions that deal with input and output
  - stdio, is short for standard input/output

- header files specify information that the compiler uses to integrate any predefined functions within a program

- You will be creating your own header files for use with your programs

## Syntax

- Header file names are case sensitive on some systems, so you should always write them in lowercase

- Two ways to #include header files in a program
  - Using angle prackets (#include <Jason.h>)
    - tells the preprocessor to look for the file in one or more standard system directories
  -Using double quotes (#include "Jason.h")
    - tells the preprocessor to first look in the current director
    
- Every C compiler that conforms to the C11 standard will have a set of standard header files supplied with it

- You should use #ifndef and #define to protect against multiple inclusions of a header file

### Some header types

//typedefs

typedef struct names_st names;

// Function prototypes

void get_naems(names *);
void show_names(const names *);
char* s_gets(cahr * st, int n);

Header file can include many different things
  - #define directives
  - structure declarations
  - typedef statements
  - function prototypes

Executable code normally goes into a source code file, not a header file