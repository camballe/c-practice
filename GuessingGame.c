// The user has to guess a number from 0 - 5
// Output whether or not the person is correct

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generate a random number
    // Pseudo random number
    // pseudo random number generator
    // this gets seeded
    // outputs a result
    // seed - from the clock

    int maxValue = 5;

    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1;

    // modulus operator %
    // remainder of some division

    printf("Guess a number between 0 - %d\n", maxValue);
    int input;
    scanf("%d", &input);

    if (input == randomNumber)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose. Try again!\n");
    }
    printf("Thank you for playing!\n");
}