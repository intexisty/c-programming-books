#include <stdio.h>

int main() {
    int a, b;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter another integer: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a + b);
    printf("%d - %d = %d", a, b, a - b);
    return 0;
}
