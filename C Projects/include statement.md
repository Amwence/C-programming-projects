# Include statement

``#include`` statement is a preprocessor keyword that works much like the import command in java. 

- #include statement is a preprocessor directive
- ``#include <library>`` tells the program to include another source code into your code. so ``#include <stdio.h>`` includes stdio.h or standard input output . h library

- It is not strictly part of the executable program, however, the program won't work without it

- The ``#`` symbol indicates that this is a preprocessing directive
    - an instruction to your compiler to do something before compiling source code
    - many preprocessing directives
    - are usually some at the beginning of the program source file, but they can be anywhere
    - similar to the import statement in java

- In the above example, the compiler is instructed to "include" in your program the contents of the file with the name stdio.h
    - Called a header file because it is usually included at the head of a program source file
    - .h extension