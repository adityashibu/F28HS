#include <stdio.h>
#define BYTE0 0x000000ff
#define BYTE1 0x0000ff00
#define BYTE2 0x00ff0000
#define BYTE3 0xff000000

int main(int argc, char *argv[])
{
    int word;
    word = 0x61626364;
    // gives 64 because BYTE0 masks the word, hence replacing the positions of ff with 64
    printf("%8x\n", word & BYTE0);
    // gives 6300 because BYTE1 masks the word, however after 63, 0 is not replaced
    printf("%8x\n", word & BYTE1);

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%8x: %c \n", word & BYTE0, word & BYTE0);
        // the below is called shifting where we drop bits and move to the next one
        word = word >> 8;
    }
}