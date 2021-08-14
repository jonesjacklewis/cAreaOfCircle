/*

Personal Project based covering the following topics:
    1. Variables
    2. Data Types
    3. printf
    4. Working with Numbers
    5. Comments
    6. Constants
    7. Getting User Input

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    printf(" ** Area of a Circle Calculator **\n");

    // Defining double constant for value of pi
    const double PI = 3.14159265358979323846;

    // Variable to store radius
    double radius;

    // Prompting user for input
    printf("Enter the radius of a circle: \n");

    // Storing user input
    scanf("%lf", &radius);

    // Calculating the area of the circle
    double area = PI * pow(radius, 2);

    // Outputting the result
    printf("The area of a circle of radius %f is %f", radius, area);


    return 0;
}