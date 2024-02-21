#include <stdio.h>
#include <stdlib.h>

void printInBinary(int n)
{
    if (n < 0)
    {
        printf("agrument invalid!");
    }
    else
    {
        printf("Number %d in base 2: ", n);
        if (n == 0)
        {
            printf("0");
        }
        while (n > 0)
        {
            printf("%d", n % 2);
            n /= 2;
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <base> <decimal number>\n", argv[0]);
        return 1;
    }

    int base = atoi(argv[1]);
    int decimalNumber = atoi(argv[2]);

    if (base == 2)
    {
        printInBinary(decimalNumber);
        printf("\n");
    }
    else if (base == 8)
    {
        printf("Number %d in base 8: %o\n", decimalNumber, decimalNumber);
    }
    else if (base == 16)
    {
        printf("Number %d in base 16: %X\n", decimalNumber, decimalNumber);
    }
    else
    {
        printf("Base is not supported. Choose 2, 8, or 16.\n");
        return 1;
    }

    return 0;
}
