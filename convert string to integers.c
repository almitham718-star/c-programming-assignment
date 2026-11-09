#include <stdio.h>

int main()
{
    char str[20];
    int num = 0;
    int i = 0;

    printf("Enter a number as a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    printf("Integer value = %d", num);

    return 0;
}