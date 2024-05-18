// 1.b) harmonic series
// 1+1/2+1/3+...
#include <stdio.h>
void main()
{
    int n, i;        // declare variables to store the number of terms and the loop counter
    float sum = 0.0; // declare a variable to store the sum of the harmonic series

    {
        // prompt the user to enter the number of terms
        printf("enter number of terms :");
        scanf("%d", &n);

        // display a message indicating the harmonic series terms
        printf("the terms are \n ");

        // loop to generate and print the harmonic series terms
        for (i = 1; i <= n; i++)
        {
            // print the current term of the harmonic series
            if (i == 1)
            {
                printf("%d + ", 1);
            }
            else
            {
                printf("1/%d + ", i);
            }

            // add the current term to the sum
            sum += 1 / (float)i;
        }

        // display the sum of the harmonic series
        printf("\nthe sum of %d harmonic series is : %f", n, sum);
    }
}