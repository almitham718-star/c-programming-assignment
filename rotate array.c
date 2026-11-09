#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, i, k;
    char direction;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions: ");
    scanf("%d", &k);

    printf("Enter direction (L/R): ");
    scanf(" %c", &direction);

    k = k % n;

    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[(i + k) % n];
        }
    }
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[(i - k + n) % n];
        }
    }
    else
    {
        printf("Invalid direction");
        return 0;
    }

    printf("Rotated array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}