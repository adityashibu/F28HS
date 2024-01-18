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

    printf("Your equation is %dx^2 + %dx + %d \n", coeff1, coeff2, constant);

    double posanswer = (-(coeff2) + pow((pow(coeff2, 2) - (4 * coeff1 * constant)), 0.5)) / (2 * coeff1);
    double neganswer = (-(coeff2)-pow((pow(coeff2, 2) - (4 * coeff1 * constant)), 0.5)) / (2 * coeff1);

    printf("The positive root is: %.3lf and %.3lf \n", posanswer, neganswer);
}