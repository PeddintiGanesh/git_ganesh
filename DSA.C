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
   // 153=1^3+5^3+3^3=153
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
   printf("the factorial of %d is : %d", n, fact);
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

// 3.B) fib using rec..
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

//4.B) file coping

#include<stdlib.h>

void main()
{
    FILE *fptr1,*fptr2;
    char ch,fname1[20],fname2[20];;
    //printf("\n\n copy a file in another name ");
    printf("input source file name :");
    scanf("%s",fname1);
    fptr1=fopen(fname1,"r");
    if (fptr1==NULL)
    {
        printf("file doesnt found");
        exit(1);
    }
    printf("input the new file name :");
    scanf("%s",fname2);
    fptr2=fopen(fname2,"w");
    if (fptr2==NULL)
    {
        printf("file doesnt found \n");
        fclose(fptr1);
        exit(2);
    }
    while (1)
    {
        ch=getc(fptr1);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            fputc(ch,fptr2);
        }
    }
    printf("the file %s copied successfully in file %s \n\n",fname1,fname2);
    fclose(fptr1);
    fclose(fptr2);
}

//4.A) append line at end of the txt file
#include <stdlib.h>

void main()
{
    FILE *fptr;
    int i, n;
    char str[50];
    char fname[20];
    char str1;
    printf("append multiple lines at the end end of a text a file:\n");
    printf("enter the file name to be opended");
    scanf("%s", fname);
    fptr = fopen(fname, "a");
    printf("enter the number of lines to be written :");
    scanf("%d", &n);
    printf("the lines are :\n");
    for (i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    fclose(fptr);
    fptr = fopen(fname, "r");
    printf("the content of the file %s is :\n", fname);
    str1 = fgetc(fptr);
    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}

// 5.A) Recursion_Fact

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("fact of %d is : %d", n, fact(n));
}

//5.B)GCD

int gcd(int a,int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
}
void main()
{
    int n1,n2;
    printf("enter any 2 numbers\n");
    scanf("%d%d",&n1,&n2);
    int res=gcd(n1,n2);
    printf("gcd of %d and %d is :%d",n1,n2,gcd(n1,n2));
}

//5.C)TOH

void TOH(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    TOH(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    TOH(n - 1, aux_rod, to_rod, from_rod);
}
void main()
{
    int n = 1;                      // Number of disks
    TOH(n, 'A', 'C', 'B'); // A, B and C are names of rods
}

// 6.C)linear search
void main()
{
    int list[20], size, i, sElement;
    printf("Enter size of the list: ");
    scanf("%d", &size);
    printf("Enter any %d integer values: ", size);
    for (i = 0; i < size; i++)
    scanf("%d", &list[i]);
    printf("Enter the element to be Search: ");
    scanf("%d", &sElement);

    // Linear Search Logic
    for (i = 0; i < size; i++)
    {
        if (sElement == list[i])
        {
            printf("Element is found at %d index", i);
            break;
        }
    }
    if (i == size)
        printf("Given element is not found in the list!!!");
}

// 6.B)binary search

#include <stdio.h>
int main()
{
    int i, first, last, mid, n, key, array[100];
    printf("Enter number of elements \n");
    scanf("%d", &n);
    printf("Enter %d integers", n);
    for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
    printf("Enter value to find");
    scanf("%d", &key);
    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
    while (first <= last)
    {
        if (array[mid] < key)
            first = mid + 1;
        else if (array[mid] == key)
        {
            printf("%d found at location %d \n", key, mid + 1);
            break;
        }
        else
            last = mid - 1;
        mid = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list \n", key);
}

// using functions -> BS

// Function for non-recursive binary search
int binarySearch(int arr[], int n, int key)
{
    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int mid = first + (last - first) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore the first half
        if (arr[mid] < key)
            first = mid + 1;

        // If key is smaller, ignore the last half
        else
            last = mid - 1;
    }

    // Key is not present in the array
    return -1;
}

int main()
{
    int n, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform non-recursive binary search
    int result = binarySearch(arr, n, key);

    // Print the result
    if (result == -1)
        printf("Element %d is not present in the array\n", key);
    else
        printf("Element %d is present at index %d\n", key, result);
}

// 7.A)stack using array
/*
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

//7.B) stack using linkedlist(errors)
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

// 8.B) Queue using linkedlist

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
}

//10) Single linked list
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
// countinues available in class...
;
;
;
;
;
;



// 10) Polynomial addition using linked list

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
struct Term
{
    int coefficient;
    int exponent;
    struct Term *next;
};

// Function to create a new term
struct Term *createTerm(int coefficient, int exponent)
{
    struct Term *newTerm = (struct Term *)malloc(sizeof(struct Term));
    if (newTerm == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;

    return newTerm;
}

// Function to insert a term into the polynomial
void insertTerm(struct Term **poly, int coefficient, int exponent)
{
    struct Term *newTerm = createTerm(coefficient, exponent);

    if (*poly == NULL)
    {
        *poly = newTerm;
    }
    else
    {
        struct Term *temp = *poly;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newTerm;
    }
}

// Function to add two polynomials
struct Term *addPolynomials(struct Term *poly1, struct Term *poly2)
{
    struct Term *result = NULL;

    while (poly1 != NULL || poly2 != NULL)
    {
        int coeff1 = (poly1 != NULL) ? poly1->coefficient : 0;
        int coeff2 = (poly2 != NULL) ? poly2->coefficient : 0;
        int exp1 = (poly1 != NULL) ? poly1->exponent : 0;
        int exp2 = (poly2 != NULL) ? poly2->exponent : 0;

        int sumCoeff = coeff1 + coeff2;
        int sumExp = exp1;

        if (exp1 == exp2)
        {
            sumExp = exp1;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (exp1 > exp2)
        {
            sumExp = exp1;
            poly1 = poly1->next;
        }
        else
        {
            sumExp = exp2;
            poly2 = poly2->next;
        }

        insertTerm(&result, sumCoeff, sumExp);
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(struct Term *poly)
{
    while (poly != NULL)
    {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        if (poly->next != NULL)
        {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}

// Function to free memory used by a polynomial
void freePolynomial(struct Term *poly)
{
    struct Term *temp;
    while (poly != NULL)
    {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}

void main()
{
    struct Term *poly1 = NULL;
    struct Term *poly2 = NULL;

    // Insert terms into the first polynomial
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 5, 1);
    insertTerm(&poly1, 2, 0);

    // Insert terms into the second polynomial
    insertTerm(&poly2, 4, 3);
    insertTerm(&poly2, 1, 1);
    insertTerm(&poly2, 7, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Perform polynomial addition
    struct Term *result = addPolynomials(poly1, poly2);

    printf("Result (Sum): ");
    displayPolynomial(result);

    // Free memory used by the polynomials
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(result);
}*/

// 11.A)Recursive_Traverse_Binary tree->ORDERS--pre,in,post

#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Function for preorder traversal
void preorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function for inorder traversal
void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function for postorder traversal
void postorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to free memory used by the binary tree
void freeTree(struct Node *root)
{
    if (root != NULL)
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
void main()
{
    // Constructing a sample binary tree
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");

    // Free memory used by the binary tree
    freeTree(root);
}
