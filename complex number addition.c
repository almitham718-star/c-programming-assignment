#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex add(struct Complex a, struct Complex b)
{
    struct Complex result;

    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;

    return result;
}

void display(struct Complex c)
{
    printf("Result = %.2f + %.2fi", c.real, c.imaginary);
}

int main()
{
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary parts of first number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary parts of second number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    sum = add(num1, num2);

    display(sum);

    return 0;
}