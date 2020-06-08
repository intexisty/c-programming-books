#include <stdio.h>

int main() {
    int input;
    printf("enter a decimal integer: ");
    scanf("%d", &input);
    printf("%d decimal is %o octal and %x hexadecimal.", input, input, input);
    return 0;
}
