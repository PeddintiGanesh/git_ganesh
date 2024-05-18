// 10) Single linked list..

// 1)Node creation
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void print_list(struct node **head)
{
    struct node *p = *head;
    printf("Elements : ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}
void insertion_at_end(struct node **head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node *));
    int value;
    printf("Enter value : ");
    scanf("%d", &value);
    temp->data = value;
    temp->link = NULL;
    struct node *p = *head;
    if (p == NULL)
        *head = temp;
    else
    {
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
    printf("value is inserted successfully!\n");
}
void insertion_at_specified_position(struct node **head)
{
    int position, value;
    printf("Enter position and value :");
    scanf("%d%d", &position, &value);
    int cnt = 1;
    struct node *p = *head;
    while (p != NULL)
    {
        if (cnt == position)
            break;
        p = p->link;
        cnt++;
    }
    if (p == NULL)
    {
        printf("Invalid Position!\n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = value;
        temp->link = p->link;
        p->link = temp;
        printf("Value is inserted at specified position!\n");
    }
}
void deletion(struct node **head)
{
    int target;
    printf("Enter target value :");
    scanf("%d", &target);
    struct node *p = *head;
    struct node *q = NULL;
    while (p != NULL)
    {
        if (p->data == target)
            break;
        q = p;
        p = p->link;
    }
    if (p == NULL)
        printf("Target value is already not present!\n");
    else if (q == NULL)
        *head = p->link;
    else
    {
        q->link = p->link;
        p->link = NULL;
        free(p);
        printf("Value is Deleted Successfully!\n");
    }
}

void search(struct node **head)
{
    int target;
    printf("Enter Target value :");
    scanf("%d", &target);
    int flag = -1;

    struct node *p = *head;
    while (p != NULL)
    {
        if (p->data == target)
        {
            flag = 1;
            break;
        }
        p = p->link;
    }

    if (flag == -1)
    {
        printf("Element is not Found!\n");
    }
    else
    {
        printf("Element is found!\n");
    }
}

int main()
{
    struct node *head = NULL;
    printf("Singly Linked List Implementation!\n");
    while (1)
    {
        int option;
        printf("Choose operation:\n1)Insertion at end\n2)Insertion at specified position\n3)Deletion\n4)Searching\n5)Print the list\n6)Exit\nEnter option:");
        scanf("%d", &option);
        if (option == 1)
            insertion_at_end(&head);
        else if (option == 2)
            insertion_at_specified_position(&head);
        else if (option == 3)
            deletion(&head);
        else if (option == 4)
            search(&head);
        else if (option == 5)
            print_list(&head);
        else
            break;
    }
    return 0;
}
