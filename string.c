#include <stdio.h>
#include <string.h>

void main()
{
    char food[100];
    printf("What is your favorite food?\n");
    scanf("%s", food);

    int charCount = 0;

    // method 1
    while (food[charCount] != '\0')
    {
        charCount++;
    }

    // method 2
    while (food[charCount] != '\0')
    {
        int characterCount = strlen(food);

        printf("The name of the food has %d characters.\n", characterCount);
    }