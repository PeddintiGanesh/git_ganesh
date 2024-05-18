// 7.A)stack using array

#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size];
int top = -1;

void push()
{
    if (top == size - 1)
        printf("stack is overflow");
    else
    {
        int value;
        printf("enter a value :");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("value pushed successfully \n");
    }
}
void pop()
{
    if (top == -1)
        printf("stack is underflow ");
    else
    {
        top--;
        printf("value popped successfully \n ");
    }
}
void peek()
{
    if (top == -1)
        printf("stack is undreflow \n");
    else
    {
        printf("peek value : %d\n", stack[top]);
    }
}
void show()
{
    if (top == -1)
        printf("stack is underflow\n");
    else
    {
        int i;
        for (i = 0; top >= i; i++)
        {
            printf("%d\n", stack[i]);
        }
    }
}
void main()
{
    int n;
    printf("stack implementation \n");
    do // take while(1) instead of "do while"
    // while ()
    {
        int option;
        printf("choose option 1)push 2)pop 3) peek 4)show 5)exit \nEnter an option :");
        scanf("%d", &option);
        if (option == 1)
            push();
        else if (option == 2)
            pop();
        else if (option == 3)
            peek();
        else if (option == 4)
            show();
        else
            break;
    } while (n > 0);
}
