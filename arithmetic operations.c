#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Division by zero is not possible");
        return 0;
    }

    return a / b;
}

float calculate(float a, float b, char op)
{
    switch (op)
    {
        case '+':
            return add(a, b);

        case '-':
            return subtract(a, b);

        case '*':
            return multiply(a, b);

        case '/':
            return divide(a, b);

        default:
            printf("Invalid operator");
            return 0;
    }
}

int main()
{
    float a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    result = calculate(a, b, op);

    if (!(op == '/' && b == 0))
    {
        printf("Result = %.2f", result);
    }

    return 0;
}