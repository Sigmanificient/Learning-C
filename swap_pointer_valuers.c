#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 42;
    int b = 69;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}
