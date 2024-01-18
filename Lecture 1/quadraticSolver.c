#include <stdio.h>
#include <math.h>

int main()
{
    // variable for the first coefficient
    int coeff1;

    // variable for the second coefficient
    int coeff2;

    // variable for the constant
    int constant;

    // Store first coefficient
    printf("Enter coefficient of x^2: ");
    scanf("%d", &coeff1);

    // Store second cofficient
    printf("Enter coefficient of x: ");
    scanf("%d", &coeff2);

    // Store constant
    printf("Enter the constant: ");
    scanf("%d", &constant);

    // Just something to display the quadratic equation the user has typed
    printf("Your equation is %dx^2 + %dx + %d \n", coeff1, coeff2, constant);

    // Use the quadratic formula to solve the given equation, and do two cases, one for positive roots and the other for negative roots
    // It is stored in doubles because pow function of math module returns the answer as a double, pow is a function used for exponents
    double posanswer = (-(coeff2) + pow((pow(coeff2, 2) - (4 * coeff1 * constant)), 0.5)) / (2 * coeff1);
    double neganswer = (-(coeff2)-pow((pow(coeff2, 2) - (4 * coeff1 * constant)), 0.5)) / (2 * coeff1);

    // Display the positive and negative answers in the placehodlers %lf which stands for long floating point, the .3 before lf is used to specify how many digits after the decimal point is required
    printf("The positive root is: %.3lf and %.3lf \n", posanswer, neganswer);
}