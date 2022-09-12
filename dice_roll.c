#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_sys_nano(void)
{
    struct timespec now;
    timespec_get(&now, TIME_UTC);
    return ((int) now.tv_nsec);
}

int* dices_roll(int n, int sides)
{
    int* dices = (int*)malloc(n * sizeof(int));

    srand(get_sys_nano());
    for (; n >= 0; n--)
        dices[n] = rand() % sides;

    return dices;
}

int main(void)
{
    int *r = dices_roll(3, 6);
    printf("dice :: %d, %d, %d\n", r[0], r[1], r[2]);
}
