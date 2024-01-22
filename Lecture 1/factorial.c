#include <stdio.h>

// Create a seperate function to calculate the factorial of a Number
// This function returns a type of unsigned long long to prevent integer overflow when calculating factorial of large numbers, and accepts a parameter of n, which is the number who's factorial needs to be calculated
unsigned long long factorial(int n)
{
    // If the given number is either 0 or 1 then return 1 as the factorial of 0 and 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // else return the given number times the result of recursively calling factorial on n - 1
    else
    {
        // The answer has been casted to unsigned long long
        return (unsigned long long)n * factorial(n - 1);
    }
}

int main(int argc, char **argv)
{
    // Variable to hold what the user has inputted
    int num;

    // Prompting the user to enter the number that the user wants to find the factorial of
    printf("Enter the number you want to calculate the factorial of: ");
    // Storing the user input at the memory address of the num variable
    scanf("%d", &num);

    // Storing the result of the factorial in a variable called result, which was returned from the factorial function defined above and given the parameter of num, which was the users inital input
    unsigned long long result = factorial(num);

    // Printing the answer out for the user, %llu is the placeholder for the unsigned long long type
    printf("The factorial of the number you have entered is: %llu \n", result);
}