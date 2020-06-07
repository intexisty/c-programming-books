#include <stdio.h>

int main() {
    int a = 0;

    a += 4;
    printf("a is %d\n", a);

    a *= 3;
    printf("a is now %d.\n", a);

    a -= 4;
    printf("a is now %d.\n", a);

    a /= 2;
    printf("a is now %d.\n", a);

    a %= 5;
    printf("a is now %d.\n", a);

    return 0;
}
