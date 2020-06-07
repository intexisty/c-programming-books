#include <stdio.h>

int main() {
    int a = 3, b;

    b = a++;
    printf("b is %d, and a is %d.\n", b, a);

    b = 5 % --a;
    printf("Now b is %d, and a is %d.\n", b, a);

    printf("now b is %d, and a is %d.\n", ++b, a--);
    printf("now b is %d, and a is %d.\n", b, a);

    return 0;
}
