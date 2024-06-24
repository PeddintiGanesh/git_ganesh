#include <stdio.h>
#include <stdlib.h>
// bit stuffing
int main()
{
	int *bits;
	int n, i, count = 0;
	printf("Enter frame length : ");
	scanf("%d", &n);
	bits = (int *)malloc(n * sizeof(int));
	printf("Enter the frame (0's and 1's) : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &bits[i]);
	}
	printf("\nFrame you entered : ");
	for (i = 0; i < n; i++)
	{
		printf("%d", bits[i]);
	}
	printf("\nAfter bit stuffing : ");
	for (i = 0; i < n; i++)
	{
		printf("%d", bits[i]);
		if (bits[i] == 1)
		{
			count++;
		}
		if (count == 5)
		{
			printf("%d", 0);
			count = 0;
		}
	}
	printf("\nAfter de stuffing : ");
	for (i = 0; i < n; i++)
	{
		printf("%d", bits[i]);
	}
	printf("\n");
	return 0;
}
