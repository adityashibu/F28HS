#include <stdio.h>

int main(char argc, char **argv)
{
    int high, low, guess, response, count;

    low = 1;
    high = 100;
    count = 0;

    while (1)
    {
        guess = (high + low) / 2;
        count = count + 1;

        printf("I guess %d \n", guess);
        printf("Am I correct? (0) \nHigh (1) \nLow (2) \nEnter your answer: ");

        scanf("%d", &response);

        if (response == 0)
            break;
        switch (response)
        {
        case 1:
            high = guess;
            break;
        case 2:
            low = guess;
            break;

        default:
            printf("I didn't understand %d \n", response);
            count = count + 1;
        }
    }

    printf("I took %d guesses \n", count);
}