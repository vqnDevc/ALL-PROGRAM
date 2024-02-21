#include <stdio.h>
#include <stdlib.h>

// Hàm kiểm tra xem một số có phải là số Fibonacci hay không
int isFibonacci(int n)
{
    if (n <= 1)
        return 1;
    int a = 0, b = 1, c;
    while (b < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return (b == n);
}

int main(int argc, char *argv[], char *environ[])
{
    if (argc < 2)
    {
        printf("Usage: %s [numbers]\n", argv[0]);
        return 1;
    }

    printf("Non-Fibonacci numbers: ");
    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (!isFibonacci(num))
        {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
