#include <stdio.h>
#define BIT0 0x00000001
#define BIT31 0x80000000

int main(int argc, char *argv[])
{
    int n;
    int i;
    printf("Enter value> ");
    scanf("%d", &n);

    for (i = 0; i < 32; i++)
    {
        printf("%3d", i);
    }
    putchar('\n');

    for (i = 0; i < 32; i++)
    {
        if (n & BIT0)
        {
            printf("  1");
        }
        else
        {
            printf("  0");
        }
        n = n >> 1;
    }

    putchar('\n');
}