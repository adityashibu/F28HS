#include <stdio.h>

MAX_ROWS = 10;
MAX_COLUMNS = 10;

void readMatrix(char *file, int matrix[MAX_ROWS][MAX_COLUMNS], int *rows, int *columns)
{
    FILE *file = fopen(file, "r");
    if (file == NULL)
    {
        printf("Error opening file %s \n", file);
        return -1;
    }

    fscanf
}

void writeMatrix()
{

}

int matrixProduct()
{

}