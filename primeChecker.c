#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{

    int input;
    bool isPrime = true;
    printf("Enter the number that you'd like to know whether it's prime or not: ");
    scanf("%d", &input);

    for (int i = input - 1; i > 1; i--)
    {
        if (input % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        printf("\n%d is a prime number.\n", input);
    }
    else
    {
        printf("\n%d is not a prime number.\n", input);
    }
    return 0;
}