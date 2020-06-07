#include <stdio.h>

int main() {
    int a = 4, b = 2, c = 3, d, e;
    d = a * -b + c;
    e = a * -(b+c);
    printf("d is %d, e is %d,\n", d, e);

    d = a + b * c;
    e = (a + b) * c;
    printf("d is %d, e is %d,\n", d, e);

    d = b % c + a;
    e = b % (c + a);
    printf("d is %d, e is %d,\n", d, e);

    d = c - b / a * a;
    e = (c - b) / (a * a);
    printf("d is %d, e is %d,\n", d, e);

    return 0;
}
