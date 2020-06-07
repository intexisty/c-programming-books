#include <stdio.h>

int main() {
    int fahrenheit, celsius;

    printf("Enter a temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%d in Fahrenheit is %d in Celsius.\n", fahrenheit, celsius);
    return 0;
}
