#include <stdio.h>

void doubler(int *a)
{
    *a *= 2;
}

int main(int argc, int **argv)
{
    int y;
    y = 1;

    doubler(&y);
    printf("%d \n", y);
}