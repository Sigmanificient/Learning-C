#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("+----------------------+\n");
    printf("| Fahrenheit | Celsius |\n");
    printf("+----------------------+\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("| %10.0f | %7.3f |\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("+----------------------+\n");
    return 0;
}