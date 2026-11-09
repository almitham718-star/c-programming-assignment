#include <stdio.h>

int main()
{
    int n, i = 0, j;
    char str[20];
    int digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        str[i] = '-';
        i++;
        n = -n;
    }

    if (n == 0)
    {
        str[i] = '0';
        i++;
    }

    while (n > 0)
    {
        digit = n % 10;
        str[i] = digit + '0';
        i++;
        n = n / 10;
    }

    str[i] = '\0';

    if (str[0] == '-')
    {
        j = 1;
        i = i - 1;

        while (j < i)
        {
            char temp = str[j];
            str[j] = str[i];
            str[i] = temp;
            j++;
            i--;
        }
    }
    else
    {
        j = 0;
        i = i - 1;

        while (j < i)
        {
            char temp = str[j];
            str[j] = str[i];
            str[i] = temp;
            j++;
            i--;
        }
    }

    printf("String value = %s", str);

    return 0;
}