#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;
    int foundLarge = 0, foundSmall = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < largest)
        {
            if (foundLarge == 0 || arr[i] > secondLargest)
            {
                secondLargest = arr[i];
                foundLarge = 1;
            }
        }

        if (arr[i] > smallest)
        {
            if (foundSmall == 0 || arr[i] < secondSmallest)
            {
                secondSmallest = arr[i];
                foundSmall = 1;
            }
        }
    }

    if (foundLarge == 1)
    {
        printf("Second largest = %d\n", secondLargest);
    }
    else
    {
        printf("Second largest element does not exist\n");
    }

    if (foundSmall == 1)
    {
        printf("Second smallest = %d\n", secondSmallest);
    }
    else
    {
        printf("Second smallest element does not exist\n");
    }

    return 0;
}