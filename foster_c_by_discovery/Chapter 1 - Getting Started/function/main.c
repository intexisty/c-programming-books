#include <stdio.h>

int f(int x);

int main() {
    int x, y, z;
    z = 4;
    y = f(z);
    printf("y is %d\n", y);

    x = y + f(3);
    printf("the value of x is %d\n", x);

    f(x);
    printf("the value of f(5) is %d\n", f(5));
    return 0;
}

int f(int x) {
    return x + 3;
}
