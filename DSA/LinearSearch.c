// 6.C)linear search

#include<stdio.h>

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

