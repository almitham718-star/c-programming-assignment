#include <stdio.h>

int main()
{
    unsigned int num1, num2;
    unsigned int mask, bits;
    int pos, n;

    printf("Enter first number: ");
    scanf("%u", &num1);

    printf("Enter second number: ");
    scanf("%u", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;

    num1 = num1 & ~(mask << pos);

    bits = num2 & mask;

    num1 = num1 | (bits << pos);

    printf("Result = %u", num1);

    return 0;
}