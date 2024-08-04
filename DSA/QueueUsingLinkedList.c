// 8.B) Queue using linkedlist

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    if (front == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
    printf("value enqueued successfully \n");
}
void dequeue()
{
    if (front == NULL)
    {
        printf("queue underflow\n");
    }
    else
    {
        struct node *temp = front;
        front = front->link;
        temp->link = NULL;
        free(temp);
        if (front == NULL)
            rear = NULL;
        printf("value dequeued successfully\n");
    }
}
void peek()
{
    if (front == NULL)
    {
        printf("queue is underflow \n");
    }
    else
    {
        printf("peek element : %d\n", front->data);
    }
}
void show()
{
    if (front == NULL)
        printf("queue is underflow \n");
    else
    {
        struct node *p = front;
        printf("queue elements :");
        while (p != NULL)
        {
            printf("\n%d", p->data);
            p = p->link;
        }
        printf("\n");
    }
}
void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    show();
    dequeue();
    show();
    peek();
}
