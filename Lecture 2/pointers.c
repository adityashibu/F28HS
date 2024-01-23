#include <stdio.h>

/*
 * is used as a pointer
 */

int main(int args, int **argv)
{
    int i = 50;

    int *i_pointer = &i;

    printf("Memory address of i is: %p \n", &i);
    printf("Address of I pointer points to: %p \n", i_pointer);

    printf("Value at i_pointer is: %d \n", *i_pointer);
}