#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *del_first(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        return head;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *ptr = NULL;

    // create a linked list with three nodes
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = (struct node *)malloc(sizeof(struct node));
    head->link->data = 2;
    head->link->link = (struct node *)malloc(sizeof(struct node));
    head->link->link->data = 3;
    head->link->link->link = NULL;

    // delete the first node
    head = del_first(head);

    // print the remaining nodes
    if (head == NULL)
    {
        printf("List is empty!");
    }
    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }

    return 0;
}
