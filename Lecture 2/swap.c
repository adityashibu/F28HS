#include <stdio.h>

// a = 3, b = 2

void swap(int a, int b)
{
    a = a + b; // 5
    b = a - b; // 3
    a = a - b; // 2

    return a, b;
}

int main(int argc, char **argv)
{
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    swap(num1, num2);

    printf("num1 is now: %d, num2 is now %d", );
}