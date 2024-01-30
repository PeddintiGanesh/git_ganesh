// 1.a) n even number & sum
#include <stdio.h>
// #include<stdlib.h>

/*void main()
{
    int a, n, i, sum = 0 ;
    printf("enter number of terms \n");
    scanf("%d", &n);
    printf("the numbers are: ");
    for (i = 1; i <= n; i++)
    {
        a = 2 * i;
        printf("%d", a);
        sum += a;
    }
    printf("\nthe sum of %d numbers is : %d", n, sum);
}

// 1.b) harmonic series
// 1+1/2+1/3+...
{
   int n,i;
   float sum=0.0;
   {
       printf("enter number of terms :");
       scanf("%d", &n);
       printf("the terms are \n ");
       for (i = 1; i <= n; i++)
       {
           if (i==1)
           {
               printf("%d + ",1);
           }
           else
           {
               printf("1/%d + ", i);
           }
           sum+=1/(float)i;
       }
       printf("\nthe sum of %d harmonic series is : %f",n,sum);
   }
}
  1.c) // armstrong or not-d
   // 153=1^3+2^3+3^3=153
{
   int n, r, temp, sum = 0;
   printf("enter a number : ");
   scanf("%d", &n);
   temp = n;
   while (n > 0)
   {
       r = n % 10;
       sum = sum + (r * r * r);    //r^3=pow(r,3);
       n = n / 10;
   }
   if (temp == sum)
   {
       printf("%d is an armsrtrong number", sum);
   }
   else
   {
       printf("%d is not an armstrong  number", sum);
   }
}
   1.d)// fact of a number
   // n!=n(n-1)!
{
   int i, n, fact = 1;
   printf("enter a number : ");
   scanf("%d", &n);
   for (i = 1; i < n+1; i++)
   {
       fact *= i;
   }
   printf("the fact of %d is : %d", n, fact);
}
  2.a)// mul of 2 square matrix
{
   int a[10][10], b[10][10], mul[10][10], r, c, i, j, n, k;
   printf("enter the number of rows");
   scanf("%d", &r);
   printf("enter the number of columns");
   scanf("%d", &c);
   printf("enter the first matrtix elements");
   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }
   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }
   printf("multiply the matrix =\n");
   for (i = 0; i < r; i++)
   {
       for (j = 0; j < c; j++)
       {
           mul[i][j] = 0;
           for (k = 0; k < c; k++)
       {
           mul[i][j] += a[i][k] * b[k][j];
       }
       }
   }
   for (i = 0; i < r; i++)
   {
       for (j = 0; j < c; j++)
       {
           printf("%d \t", mul[i][j]);
       }
       printf("\n");
   }
}
  // 2.b)transpose
{
   int i,j,m,n;
   printf("enter the no.of rows");
   scanf("%d",&m);
   printf("enter the no.of columns");
   scanf("%d",&n);
   int matrix[50][50];
   printf("enter the elements of the matrix :\n");
   for ( i = 0; i < m; i++)
   {
       for ( j = 0; j < n; j++)
       {
           scanf("%d",&matrix[i][j]);
       }
   }
   for ( i = 0; i < m; i++)
   {
       for ( j = 0; j < n; j++)
       {
           int temp=matrix[i][j];
           matrix[i][j]=matrix[j][i];
           matrix[j][i]=temp;
       }
   }
   printf("the transpose matrix :\n");
   for ( i = 0; i < n; i++)
   {
       for ( j = 0; j < m; j++)
       {
           printf("%d",matrix[i][j]);
       }
       printf("\n");
   }
}

// 3.a)prime number
{
    int i, num,m=0,flag=0;
    printf("enter a number :");
    scanf("%d", &num);
    m=num/2;
    for (i = 2; i < m / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            flag=1;
            break;
        }
        if(flag==0)
        {
            printf("%d is prime number", num);
        }
    }
}
// prime number
{
    int n, isPrime = 1;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
}

// 3.b) fib using rec..
//  fib=0,1,1,2,3,5...=(n-1)+(n-2)

int fib(int);
void main()
{
    int n,result;
    printf("enter the nth number ");
    scanf("%d", &n);
    result = fib(n);
    printf("the %dth number in fib series is :%d", n, result);
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

    //3.C)add 2 no's using call by ref..
int add(int*,int*);
void main()
{
    int a,b,c;
    printf("enter any two numbers ");
    scanf("%d%d",&a,&b);
    c=add(&a,&b);
    printf("the sum of %d and %d is: %d",a,b,c);
}
int add(int *a,int *b)
{
    int c;
    c=*a+*b;
}

// 7.C)stack using array

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

// 8.B)queue using array

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

// stack using linkedlist(errors)
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
        printf("item pushed");
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
    //ptr = head;
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
        //printf("stack implementation using linkedlist\n");
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

//queue using linkedlist

#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node* front=NULL;
struct node*rear=NULL;
void enqueue(int value)
{
    struct node*temp=(struct node*)malloc (sizeof(struct node));
    temp->data=value;
    temp ->link=NULL;
    if(front==NULL)
    {
        front = rear=temp;
    }
    else
    {
        rear->link=temp;
        rear=temp;
    }
    printf("value enqueued successfully \n");
}
void dequeue()
{
    if (front ==NULL)
    {
        printf("queue underflow\n");
    }
    else{
        struct node *temp=front;
        front=front->link;
        temp->link=NULL;
        free(temp);
        if(front==NULL)
        rear=NULL;
        printf("value dequeued successfully\n");
    }
}
void peek()
{
    if (front==NULL)
    {
        printf("queue is underflow \n");
    }
    else{
        printf("peek element : %d\n",front->data);
    }
}
void show()
{
    if(front==NULL)
    printf("queue is underflow \n");
    else{
        struct node*p=front;
        printf("queue elements :");
        while (p!=NULL)
        {
            printf("\n%d",p->data);
            p=p->link;
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
}*/

// single linked list
// 1)Node creation
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void print_list(struct node **head)
{
    struct node *p = *head;
    printf("elements : ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    print_list("\n");
}
void main()
{
    struct node *head = NULL;
    struct node *first = (struct node *)malloc(sizeof(struct node *));
    first->data = 10;
    struct node *second = (struct node *)malloc(sizeof(struct node *));
    second->data = 20;
    struct node *third = (struct node *)malloc(sizeof(struct node *));
    third->data = 30;
    head = first;
    first->link = second;
    second->link = third;
    third->link = NULL;
    print_list(&head);
}
