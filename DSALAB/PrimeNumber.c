// 3.A)prime number..

#include <stdio.h>
void main() /*
 {
     int i, num, m = 0, flag = 0;
     printf("enter a number :");
     scanf("%d", &num);
     m = num / 2;
     for (i = 2; i < m / 2; i++)
     {
         if (num % i == 0)
         {
             printf("%d is not a prime number", num);
             flag = 1;
             break;
         }
         if (flag == 0)
         {
             printf("%d is prime number", num);
         }
     }
 }
 // prime number
 */
{
    int n, isPrime = 1;
    printf("enter a number :");
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
