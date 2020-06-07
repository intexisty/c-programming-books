#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter an integer: ");
    scanf("%d", &a);

    b = a + 4;
    c = a - 3;
    d = -a;
    printf("b is %d,\nc is %d, and\nd is %d.\n\n", b, c, d);

    b = a * 3;
    c = a - 3;
    d = a % 3;
    printf("Now\nb is %d,\nc is 5d, and\nd is %d.\n", b, c, d);

    return 0;
}
