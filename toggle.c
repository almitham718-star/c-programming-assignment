#include <stdio.h>

int main()
{
    unsigned int num, mask;
    int pos, n;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;
    mask = mask << pos;

    num = num ^ mask;

    printf("Result after toggling = %u", num);

    return 0;
}