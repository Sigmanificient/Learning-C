#include <stdio.h>

int main(void) {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("+----------------------+\n");
    printf("| Celsius | Fahrenheit |\n");
    printf("+----------------------+\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0) / 5.0  + 32;
        printf("| %7.0f | %10.0f |\n", celsius, fahr);
        celsius = celsius + step;
    }

    printf("+----------------------+\n");
    return 0;
}