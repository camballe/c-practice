#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct node
{
    int data;
    struct node *next;
} node_t;

// Define the circular queue structure
typedef struct
{
    node_t *front;
    node_t *rear;
} circular_queue_t;

// Initialize the circular queue
void init_circular_queue(circular_queue_t *q)
{
    q->front = NULL;
    q->rear = NULL;
}

// Check if the circular queue is empty
int is_circular_queue_empty(circular_queue_t *q)
{
    return (q->front == NULL);
}

// Enqueue an element to the circular queue
void enqueue_circular_queue(circular_queue_t *q, int data)
{
    node_t *new_node = malloc(sizeof(node_t));
    new_node->data = data;
    if (q->front == NULL)
    {
        q->front = new_node;
    }
    else
    {
        q->rear->next = new_node;
    }
    new_node->next = q->front;
    q->rear = new_node;
}

// Dequeue an element from the circular queue
void dequeue_circular_queue(circular_queue_t *q)
{
    if (is_circular_queue_empty(q))
    {
        printf("Circular queue is empty\n");
        return;
    }
    node_t *temp = q->front;
    if (q->front == q->rear)
    {
        q->front = NULL;
        q->rear = NULL;
    }
    else
    {
        q->front = q->front->next;
        q->rear->next = q->front;
    }
    free(temp);
}

// Display the elements of the circular queue
void display_circular_queue(circular_queue_t *q)
{
    if (is_circular_queue_empty(q))
    {
        printf("Circular queue is empty\n");
        return;
    }
    node_t *temp = q->front;
    printf("Circular queue elements: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != q->front);
    printf("\n");
}

int main()
{
    circular_queue_t q;
    init_circular_queue(&q);
    enqueue_circular_queue(&q, 1);
    enqueue_circular_queue(&q, 2);
    enqueue_circular_queue(&q, 3);
    display_circular_queue(&q);
    dequeue_circular_queue(&q);
    dequeue_circular_queue(&q);
    display_circular_queue(&q);
    enqueue_circular_queue(&q, 4);
    enqueue_circular_queue(&q, 5);
    display_circular_queue(&q);
    return 0;
}
