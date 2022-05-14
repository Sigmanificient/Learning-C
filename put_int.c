#include <stdio.h>

void put_int(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }

    if (n > 9)
    {
        put_int(n / 10);
    }

    putchar(48 + n % 10);
}

int main(void)
{
    put_int(42);
    putchar('\n');

    put_int(69);
    putchar('\n');

    put_int(-1);
    putchar('\n');
}
