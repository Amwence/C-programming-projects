#include <stdio.h>

int main()
{
    int integer = sizeof(int);
    char character = sizeof(char);
    long lvar= sizeof(long);
    long long  llvar = sizeof(long long);
    double dvar = sizeof(double);
    long double ldvar= sizeof(long double);
    printf(" int: %zd,char: %zd, long: %zd, long long: %zd, double : %zd, long double : %zd ", integer, character, lvar, llvar, dvar, ldvar);

    return 0;
}