#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, j, found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No pairs found");
    }

    return 0;
}