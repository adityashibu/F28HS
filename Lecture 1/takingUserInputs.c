#include <stdio.h>

int main()
{
    // Declare a variable to store the user given number
    int a;
    // Prompting the user to enter a number to store
    printf("Enter a number: ");

    // Put in a placeholder to store the value at the memory address of a, which is why we use &a and not just a, if you used just a, it would give a segmentation error
    scanf("%d", &a);

    // Printing out what the user entered
    printf("You typed: %d \n", a);
}