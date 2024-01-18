// Import the standard Input output library
#include <stdio.h>

int main(int argc, char *argv[])
{
    // Define a variable using the format: type (name), then assign a value if required, not necessary
    int i = 2140000000;
    int j = 2;

    // printf takes two arguments, one the value to print and another the value to place in the placeholder, the second one is only needed as an argument if you have used placeholders in the first argument
    printf("i is %d \n", i);

    printf("Hello world\n");

    // sizeif is a function used to find out the size reserved to the variable, %zu is a placeholder used to display the data format for bytes
    printf("Size of i is: %zu bytes \n", sizeof(i));
    // & is character used right before a variable to display the memory address of the variable it was used before, example &name would give me the memory address for the variable name
    printf("I start memory location is: %p \n", &i);
    printf("J start memory location is: %p \n", &j);
}