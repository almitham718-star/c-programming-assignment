#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int alphabet[26] = {0};
    int i, flag = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabet[str[i] - 'A'] = 1;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            alphabet[str[i] - 'a'] = 1;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The given string is a pangram");
    }
    else
    {
        printf("The given string is not a pangram");
    }

    return 0;
}