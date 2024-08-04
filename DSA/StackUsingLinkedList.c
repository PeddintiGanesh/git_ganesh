// 7.B) stack using linkedlist(errors)

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); //*ptr =node
    if (ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("enter the value\n");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("item pushed\n");
    }
}
void pop()
{
    int item;
    struct node *ptr;
    if (head = NULL)
    {
        printf("underflow");
    }
    else
    {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("item popped");
    }
}
void peek()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("underflow");
    }
    else
    {
        printf("peek element is :%d\n", head->val);
    }
}
void show()
{
    struct node *ptr;
    // ptr = head;
    if (head == NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("printing stack elements\n");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->val);
            ptr = ptr->next;
        }
    }
}
void main()
{
    printf("stack implementation using linkedlist\n");
    while (1)
    {
        int option;
        // printf("stack implementation using linkedlist\n");
        printf("choose one option 1)push 2)pop 3)peek 4)show 5)exit \nEnter an option: ");
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
    }
}
