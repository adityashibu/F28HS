#include <stdio.h>

int main(char argc, char **argv)
{
    // Declare variable to be used throughout the program:
    // High for declaring the highest int that the user can guess up to
    // Low for declaring the lowest int that the user can guess
    // Guess to store what the program has guessed
    // Response to store what the user has told about the programs guess, ie if it's correct, too high, or too low
    // Count to keep track of how many guesses the program has made
    int high, low, guess, response, count;

    // Declare that the lowest a user can guess is 1 and the highest it can go up to is 100, also set count to 0
    low = 1;
    high = 100;
    count = 0;

    // While(1) means while true
    while (1)
    {
        // Tell the program to guess that the number would be the average of high + low
        guess = (high + low) / 2;
        // Increment the count by 1 as the program made a guess
        count = count + 1;

        // print out the programs guess
        printf("I guess %d \n", guess);

        // Prompt the user to ask if the programs guess was right, or if it was higher or lower than what the user expected
        printf("Am I correct? (0) \nHigh (1) \nLow (2) \nEnter your answer: ");
        // Store it at the memory address of response
        scanf("%d", &response);

        // If the user gives an input of 0 then break out of the program
        if (response == 0)
            break;
        // Switch cases to handle various user inputs for response
        switch (response)
        {
        // If the user inputted 1 then that means the program guessed too high, so set the high to the number that the program had guessed and break out of the switch block
        case 1:
            high = guess;
            break;
        // If the user inputted 1 then that means the program guessed too low, so set the low to the number that the program had guessed and break out of the switch block
        case 2:
            low = guess;
            break;
        // This is the case to handle any other user input, apart from 0, 1 and 2
        default:
            printf("I didn't understand %d \n", response);
            count = count - 1;
        }
    }
    // Print the number of times the program had to guess
    printf("I took %d guesses \n", count);
}