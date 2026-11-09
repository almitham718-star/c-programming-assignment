#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (j == 0 || str[j - 1] != ' ')
            {
                str[j] = str[i];
                j++;
            }
        }
        else
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Modified string: %s", str);

    return 0;
}