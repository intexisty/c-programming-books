#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Enter a positive and a negative integer. ");
    printf("Separate with a space: ");
    scanf("%d %d", &a, &b);

    printf("The value of a / b is %d\n", -(abs(a) / abs(b)));
    printf("The value of a %% b is %d\n", -(abs(a) % abs(b)));
    return 0;
}
