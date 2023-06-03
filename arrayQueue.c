#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue is full.\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    front++;
    if (front > rear)
    {
        front = rear = -1;
    }
}

int peek()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return -1;
    }
    return queue[front];
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    display();
    printf("Front element is %d\n", peek());
    return 0;
}
