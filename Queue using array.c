// 8.B)queue using array
#include <stdio.h>
#include <stdlib.h>
#define size 5

int queue[size];
int rear = -1;
int front = -1;

void enqueue()
{
    if (rear == size - 1)
        printf("queue is overflow");
    else
    {
        int value;
        printf("enter a value \n");
        scanf("%d", &value);
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("value enqueued successfully \n");
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
        printf("queue is underflow");
    else
    {
        front++;
        printf("value dequeued successfullu \n");
    }
}
void peek()
{
    if (front == -1 || front > rear)
        printf("queue is underflow");
    else
    {
        printf("peek value is :%d\n", queue[front]);
    }
}
void show()
{
    if (front == -1 || front > rear)
        printf("queue is underflow");
    else
    {
        int i;
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

void main()
{
    printf("queue implementation using array\n");
    while (1)
    {
        int option;
        printf("choose one option 1)enqueue 2)dequeue 3)peek 4)show 5)exit \nEnter an option:\n ");
        scanf("%d", &option);
        if (option == 1)
            enqueue();
        else if (option == 2)
            dequeue();
        else if (option == 3)
            peek();
        else if (option == 4)
            show();
        else
            break;
    }
}
