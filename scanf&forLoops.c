#include <stdio.h>
void main()
{
    // int d;
    // char a;

    // scanf("%c", &a);
    // getchar(); // fixes the issue of input stream
    // scanf("%d", &d);
    int max;
    scanf("%d", &max);

    int i;
    for (i = 0; i < max; i++)
    {
        printf("%d\n", i);
    }
    printf("You printed upto the number %d\n", i);
}