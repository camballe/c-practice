#include <stdio.h>

#define MAX_SIZE 100

int tree[MAX_SIZE];
int size;

// function to insert a node into the binary tree
void insert(int value)
{
    if (size >= MAX_SIZE)
    {
        printf("Error: Tree is full.\n");
        return;
    }
    tree[size++] = value;
}

// function to perform preorder traversal of the binary tree
void preorder(int index)
{
    if (index >= size)
    {
        return;
    }
    printf("%d ", tree[index]);
    preorder(2 * index + 1);
    preorder(2 * index + 2);
}

// function to perform postorder traversal of the binary tree
void postorder(int index)
{
    if (index >= size)
    {
        return;
    }
    postorder(2 * index + 1);
    postorder(2 * index + 2);
    printf("%d ", tree[index]);
}

// function to perform inorder traversal of the binary tree
void inorder(int index)
{
    if (index >= size)
    {
        return;
    }
    inorder(2 * index + 1);
    printf("%d ", tree[index]);
    inorder(2 * index + 2);
}

int main()
{
    // insert nodes into the binary tree
    insert(4);
    insert(2);
    insert(7);
    insert(1);
    insert(3);
    insert(6);
    insert(9);

    // perform preorder traversal
    printf("Preorder traversal: ");
    preorder(0);
    printf("\n");

    // perform postorder traversal
    printf("Postorder traversal: ");
    postorder(0);
    printf("\n");

    // perform inorder traversal
    printf("Inorder traversal: ");
    inorder(0);
    printf("\n");

    return 0;
}
