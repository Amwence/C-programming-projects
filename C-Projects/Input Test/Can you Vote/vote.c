#include <stdio.h>

int main()
{
    int age = 0; // declare integer age and set it to 0
    
    printf("How old are you?"); // print to screen Question
    
    scanf("%d", &age); // take integer value and assigns it to age variable (need "data type", &variableName for it to work.)
    
    // if else statement that takes the variable performs operation, and then outputs if person is able to vote. 
    if(age >= 18){
        printf("You are old enough to vote");
    }
    else{
        printf("You are not old enough to vote");
    }
    return 0;
}