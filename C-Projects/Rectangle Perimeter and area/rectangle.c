# include <stdio.h>


//throws a warning without int in front because of c standard 99 still works without int and just main
int main(){
    
    // declare variables and set initial values
    double rectangleWidth = 0;
    double rectangleHeight = 0;
    double rectanglePerimiter = 0;
    double rectangleArea = 0;
    //request input for height and width
    printf("What is the height of the rectangle?\n");
    scanf("%lf", &rectangleHeight);
    
    printf("What is the width of the rectangle?\n");
    scanf("%lf", &rectangleWidth);
    // perform calculations for permiter and area
    rectanglePerimiter = (rectangleWidth + rectangleHeight) * 2;
    rectangleArea = rectangleWidth * rectangleHeight;
    //print results
    printf("The area of the rectangle is: %.2lf\n", rectangleArea); //rounded to the second decimal
    printf("The perimiter of the rectangle is: %.2lf\n", rectanglePerimiter); // rounded to the second decimal
    printf(" The AREA is %lf ::: The PERIMITER is %lf ::: The HEIGHT is %lf ::: The WIDTH is %lf\n", rectangleArea, rectanglePerimiter, rectangleHeight, rectangleWidth); // all in one print statement
    printf(" The AREA is %lf \n The PERIMITER is %lf \n The HEIGHT is %lf \n The WIDTH is %lf\n", rectangleArea, rectanglePerimiter, rectangleHeight, rectangleWidth); // all in one print statement on new lines
    
    return 0;
}