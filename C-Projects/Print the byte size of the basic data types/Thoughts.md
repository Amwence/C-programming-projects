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


It looks like it worked. Not positive, but looks like it did not like the %zd format so unsure if that breaks this somehow or if this is the correct output. I also ran the program on an online compiler vs my computer as I did not have access to it at the time. I have not programmed in a long while and kind of jumped back in at the sizeof operator section without remembering almost anything. I was trying to use the ``var`` keyword, but that doesn't seem to be a thing in C, I must've picked that up messing with something else googling looks like that might be javascript. Need to focus on just one, but I run across so many different things when messing with stuff it's hard to tell which is from which programming language. 

I struggled getting started I knew I wanted to declare variables and then assign the sizeof(thing) to each of them. I did not remember how to print or declare variable so I had to review my notes to get it done. Luckily after realizing var isn't a keyword in C and vaguely remember how to do output using the %datatype I was able to muddle my way through it. going to watch next video and see how instructor finished the example to see how far off I was. 


After watching how he did his, he just used ``printf`` statements with the sizeof operator directly in the statement. He had different numbers than I did and %zd wasn't working for him so he changed his datatype to %u unsigned. That worked for him but when I did that it changed the numbers for long double to zero and double for me. It makes me wonder which one is correct. I used the same online compiler for both calculations so unsure which is correct.

```
int: 4,
 char: 1,
 long: 8,
 long long: 8,
 double : 2635407424,
 long double : 0
```