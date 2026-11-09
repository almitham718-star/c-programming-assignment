#include <stdio.h>

int main()
{
    unsigned int num, result, mask;
    int pos, n;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;

    result = (num >> pos) & mask;

    printf("Extracted bits = %u", result);

    return 0;
}