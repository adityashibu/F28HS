#include <stdio.h>
#include <stdlib.h>

void copy(FILE *fIn, FILE *fOut)
{
    int ch;
    ch = getc(fIn);
    while (ch != (-1))
    {
        putc(ch, fOut);
        ch = getc(fIn);
    }
}

int main(int argc, char *argv[])
{
    /*
    FILE * open (path, mode)

    return
    FILE address
    NULL if no file

    argv = parameters passed to executable
    argc = no of command line arguments, including call to executable

    */

    if (argc != 3)
    {
        printf("Wrong number of arguments \n");
        exit(0);
    }

    FILE *fIn, *fOut;
    fIn = fopen("test.txt", "r");

    fOut = fopen("testOut.txt", "w");

    if (fIn == NULL)
    {
        printf("Cant find the file");
        exit(0);
    }

    if (fOut == NULL)
    {
        printf("No file created");
        exit(0);
    }

    // something
    copy(fIn, fOut);

    fclose(fIn);
    fclose(fOut);
}