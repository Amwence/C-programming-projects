/******************************************************************************

                            Note:
    The modulus operator only works with two integers so it will not
    work with the double type for years and days. In order to use the modulous 
    operator with double you have to typecast. Converting one datatype into
    another is known as type casting or, type-conversion. For example,
    if you want to store a 'long' value into a simple integer then you can type
    cast 'long' to 'int'. You can convert the values from one type to another 
    explicitly using the cast operator as follows −

(type_name) expression

*******************************************************************************/

# include <stdio.h>

int main (){

// declare and initialize variables
    int minutes = 0;
    double years = 0.0;
    double days = 0.0;
    double total_days = 0.0;

    printf("This program converts minutes into years and days\n");
    printf("How many minutes do you want to convert? \n");
    // take user input into vairalbe minutes
    scanf("%d", &minutes);
// perform days conversion from the remainder of years
    days = (double)(minutes % 52600)/1440; 
// perform years conversion
    years = (double)minutes/525600;
// perform total days conversion
    total_days = (double)minutes/1440;
// print results
    printf("in %d minutes there are:\n", minutes);
    printf("Days in %d minutes: %lf\n", minutes, total_days);
    printf("Years in %d minutes: %lf\n", minutes, years);
    printf("or aproximitely %lf years and %lf days", years, days);

    return 0;
}