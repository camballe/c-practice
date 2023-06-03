// Create a program that takes two doubles as inputs, calculates the hypotenuse of a right triangle and outputs it.

#include <stdio.h>
#include <math.h>
int main()
{
    double base, height;
    printf("This program will calculate the hypotenuse of a right triangle\n\n");
    printf("Enter the base length of the triangle\n");
    scanf("%lf", &base);

    printf("Enter the height of the triangle\n");
    scanf("%lf", &height);

    double hypotenuse = sqrt((base * base) + (height * height));
    printf("The hypotenuse of the triangle is %lf\n", hypotenuse);

    return 0;
}