#include <stdio.h>
#include <stdlib.h>

int sum_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    int input = atoi(argv[1]);
    printf("Sum digits of %d = %d", input, sum_digits(input));
    return 0;
}