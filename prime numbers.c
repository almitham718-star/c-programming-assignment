#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            printf("%d is a prime number", n);
        }
        else
        {
            printf("%d is not a prime number", n);
        }
    }

    return 0;
}