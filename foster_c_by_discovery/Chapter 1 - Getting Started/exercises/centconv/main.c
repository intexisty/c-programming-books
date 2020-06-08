#include <stdio.h>

#define US_QUARTER 25
#define US_DIME 10
#define US_NICKEL 5

int main() {
    int input;
    printf("Enter the amount for which change must be created: ");
    scanf("%d", &input);

    printf("%d quarter(s), %d dime(s), %d nickel(s) and %d penny(ies)", input / US_QUARTER, (input % US_QUARTER) / US_DIME, ((input % US_QUARTER) / US_DIME) % US_NICKEL, input % US_NICKEL);
    return 0;
}
