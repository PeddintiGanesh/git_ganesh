//1.d) fact of a number
   // n!=n(n-1)!
#include<stdio.h>
void main()
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