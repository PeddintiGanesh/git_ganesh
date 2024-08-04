// 3.B) fib using rec..
//  fib=0,1,1,2,3,5...=(n-1)+(n-2)

#include<stdio.h>

int fib(int);
void main()
{
    int n, result;
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
