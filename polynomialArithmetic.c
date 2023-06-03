#include <stdio.h>

struct node *create(struct node *head)
{
    int n;
    int i;
    float coeff;
    int expo;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the coefficient for term %d: ", i + 1);
        scanf("%f", &coeff);

        printf("Enter the exponent for term %d: ", i + 1);
        scanf("%d", &expo);
        head = insert(head, coeff, expo);
    }
}

int main()
{
    struct node *head = NULL;
    printf("Enter the polynomial\n");
    head = create(head);
}