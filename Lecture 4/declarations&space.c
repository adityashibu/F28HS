#include <stdio.h>

int main(int argc, char *argv[])
{

    // sizeof operatoe gives the size of the given input in bytes, use zu to store the output of sizeof
    printf("%zu \n", sizeof(int));
    printf("%zu \n", sizeof(double));
    printf("%zu \n", sizeof(char));
    printf("%zu \n", sizeof(float));
    printf("%zu \n", sizeof(long));

    int x;
    char *c1;
    x = 0x76543210;
    c1 = (char *)&x;

    printf("%x \n", c1[0]);
}