#include <stdio.h>
int main()
{
    int x = 10;
    int *P = &x;
    *P = 30;
    printf("%d\n", x);
}