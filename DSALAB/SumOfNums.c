// 1.a) n even number & sum
#include <stdio.h>

void main()
{
    int a, n, i, sum = 0; // declare variables to store the terms, term count, loop counter, and sum

    // prompt the user to enter the number of terms
    printf("enter number of terms : ");
    scanf("%d", &n);

    // display a message indicating the numbers to be printed
    printf("the numbers are: ");

    // loop to generate and print the even numbers
    for (i = 1; i <= n; i++)
    {
        // calculate the current even number
        a = 2 * i;

        // print the current even number
        printf("%d ", a);

        // add the current even number to the sum
        sum += a;
    }

    // display the sum of the generated even numbers
    printf("\nthe sum of %d numbers is : %d", n, sum);
}