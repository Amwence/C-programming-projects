# Requirements

In this Challenge, you are to create a C program that displays the byte size of basic data types supported in C 
    - The output varies depending on the system you are running on

- Display the byt size of the following types:
    - int
    - char
    - long
    - long long
    - double
    - long double

- You can use the %zd format specifier to format each size
- use the sizeof operator
- test on more than one computer to see the differences

After my program this is the following output:

```
main.c: In function ‘main’:
main.c:19:21: warning: format ‘%zd’ expects argument of type ‘signed size_t’, but argument 2 has type ‘int’ [-Wformat=]
   19 |     printf(" int: %zd,char: %zd, long: %zd, long long: %zd, double : %zd, long double : %zd ", integer, character, lvar, llvar, dvar, ldvar);
      |                   ~~^                                                                          ~~~~~~~
      |                     |                                                                          |
      |                     long int                                                                   int
      |                   %d
main.c:19:31: warning: format ‘%zd’ expects argument of type ‘signed size_t’, but argument 3 has type ‘int’ [-Wformat=]
   19 |     printf(" int: %zd,char: %zd, long: %zd, long long: %zd, double : %zd, long double : %zd ", integer, character, lvar, llvar, dvar, ldvar);
      |                             ~~^                                                                         ~~~~~~~~~
      |                               |                                                                         |
      |                               long int                                                                  int
      |                             %d
main.c:19:58: warning: format ‘%zd’ expects argument of type ‘signed size_t’, but argument 5 has type ‘long long int’ [-Wformat=]
   19 |     printf(" int: %zd,char: %zd, long: %zd, long long: %zd, double : %zd, long double : %zd ", integer, character, lvar, llvar, dvar, ldvar);
      |                                                        ~~^                                                               ~~~~~
      |                                                          |                                                               |
      |                                                          long int                                                        long long int
      |                                                        %lld
main.c:19:72: warning: format ‘%zd’ expects argument of type ‘signed size_t’, but argument 6 has type ‘double’ [-Wformat=]
   19 |     printf(" int: %zd,char: %zd, long: %zd, long long: %zd, double : %zd, long double : %zd ", integer, character, lvar, llvar, dvar, ldvar);
      |                                                                      ~~^                                                        ~~~~
      |                                                                        |                                                        |
      |                                                                        long int                                                 double
      |                                                                      %f
main.c:19:91: warning: format ‘%zd’ expects argument of type ‘signed size_t’, but argument 7 has type ‘long double’ [-Wformat=]
   19 |     printf(" int: %zd,char: %zd, long: %zd, long long: %zd, double : %zd, long double : %zd ", integer, character, lvar, llvar, dvar, ldvar);
      |                                                                                         ~~^                                           ~~~~~
      |                                                                                           |                                           |
      |                                                                                           long int                                    long double
      |                                                                                         %Lf
 int: 4,char: 1, long: 8, long long: 8, double : 140674880528448, long double : -9223372036854775808 
```