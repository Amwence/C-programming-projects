#include <stdio.h>

main(){

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company company_1 = XEROX;
    enum Company company_2 = GOOGLE;
    enum Company company_3 = EBAY;
    printf("%d \n", company_1);
    printf("%d \n", company_2);
    printf("%d \n", company_3);
    return 0;
}