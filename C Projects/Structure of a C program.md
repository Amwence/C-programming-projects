# Structure of a C program

## Comments
All C program starts with a ``main()`` function followed by a codeblock encased in curly brackets ``{}``. They are also case sensitive.

```
#include <stdio.h>

int main()
{
    printf("Hi, my name is Anthony");
    return 0;
}
```
- Single-line comments are done with two forward slashes. 

- Multi-line comments in C code are done with one forward slash followed by your an asterisk and then text

```
/*
this 
is 
a 
multi 
line 
comment
*/

//this is a single line comment
```
## Preprocessor

Unique feature of C 

Allows for programs to be easier to develop, easier to read, easier to modify, and easier to prot to different computer systems

- Part of the C compilation process that recognizes special statements
    - analyzes these statements before analysis of the C program itself
    - an instruction to your compiler to do something before compiling source code
    - could be anywhere in your code

- Preprocessor statements are identified by the presence of a pound sign, #, which mus be the first non-space character on the line

- We will utilize the preprocessor to: 
    - create our own constants and macros with the #define statement
    - build your own library files with the #include statement
    - make more powerful programs with the conditional #ifdef, #endif, #else, and #ifndef statements
