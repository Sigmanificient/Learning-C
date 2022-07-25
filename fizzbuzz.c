#include <stdio.h>


void put_str(char *str)
{
    while (*str)
        putchar(*str++);
}


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


void fizzbuzz(int n)
{
     int passed = 0;

     if (n % 3 == 0) {
         put_str("Fizz");
         passed = 1;
     }
     if (n % 5 == 0) {
         put_str("Buzz");
         passed = 1;
     }
     if (!passed) put_int(n)
     put_str("\n");
}


int main()
{
    int passed;

    for (int i = 0; i < 100; i++) {
        fizzbuzz(i);
    }
    return 0;
}
