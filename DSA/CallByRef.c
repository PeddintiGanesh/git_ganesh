// 3.C)add 2 no's using call by ref..

#include <stdio.h>

int add(int *, int *);
void main()
{
    int a, b, c;
    printf("enter any two numbers ");
    scanf("%d%d", &a, &b);
    c = add(&a, &b);
    printf("the sum of %d and %d is: %d", a, b, c);
}
int add(int *a, int *b)
{
    int c;
    c = *a + *b;
}
