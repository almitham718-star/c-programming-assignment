#include <stdio.h>

int main()
{
    unsigned int a, b;
    unsigned int mask, bits1, bits2;
    int pos, n;

    printf("Enter two numbers: ");
    scanf("%u %u", &a, &b);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to swap: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;

    bits1 = (a >> pos) & mask;
    bits2 = (b >> pos) & mask;

    a = a & ~(mask << pos);
    b = b & ~(mask << pos);

    a = a | (bits2 << pos);
    b = b | (bits1 << pos);

    printf("First number after swapping = %u\n", a);
    printf("Second number after swapping = %u\n", b);

    return 0;
}