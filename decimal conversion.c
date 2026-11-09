#include <stdio.h>

void convert(int n, int base)
{
    char result[32];
    int i = 0, rem;

    if (n == 0)
    {
        printf("Converted number = 0");
        return;
    }

    while (n > 0)
    {
        rem = n % base;

        if (rem < 10)
        {
            result[i] = rem + '0';
        }
        else
        {
            result[i] = rem - 10 + 'A';
        }

        i++;
        n = n / base;
    }

    printf("Converted number = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
}

int main()
{
    int n, base;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    printf("Enter target base (2-16): ");
    scanf("%d", &base);

    if (base >= 2 && base <= 16 && n >= 0)
    {
        convert(n, base);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}