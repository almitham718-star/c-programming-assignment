#include <stdio.h>

void countFrequency(int n, int freq[])
{
    int digit, i;

    for (i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }

    if (n < 0)
    {
        n = -n;
    }

    if (n == 0)
    {
        freq[0] = 1;
    }

    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }
}

int main()
{
    int n, i;
    int freq[10];

    printf("Enter a number: ");
    scanf("%d", &n);

    countFrequency(n, freq);

    printf("Digit frequencies:\n");

    for (i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d appears %d times\n", i, freq[i]);
        }
    }

    return 0;
}