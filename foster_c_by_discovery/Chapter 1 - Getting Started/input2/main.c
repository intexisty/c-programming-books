#include <stdio.h>

int main() {
    int intvar;

    printf("Enter a decimal integer value: ");
    scanf("%d", &intvar);

    printf("The hexadecimal equivalent of %d is %x.\n", intvar, intvar);

    printf("Enter a hexadecimal integer value: ");
    scanf("%x", &intvar);

    printf("The value you entered was %o in octal.\n", intvar);

    printf("Enter an octal integer value: ");
    scanf("%o", &intvar);

    printf("The value you entered was %d in decimal.\n", intvar);
    return 0;
}
