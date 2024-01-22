#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (unsigned long long)n * factorial(n - 1);
    }
}

int main(int argc, char **argv)
{
    int num;

    printf("Enter the number you want to calculate the factorial of: ");
    scanf("%d", &num);

    unsigned long long result = factorial(num);

    printf("The factorial of the number you have entered is: %llu \n", result);
}