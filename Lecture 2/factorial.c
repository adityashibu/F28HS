#include <stdio.h>

int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

int main(int argc, char **argv)
{
    int response, fact;

    printf("Enter a number to find the factorial of: ");
    scanf("%d", &response);

    fact = factorial(response);

    printf("Factorial of %d is %d \n", response, fact);
}