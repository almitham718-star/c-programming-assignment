#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, i, j = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Rearranged array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}