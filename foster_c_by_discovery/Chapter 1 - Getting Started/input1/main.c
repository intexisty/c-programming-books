#include <stdio.h>

int main() {
    int intvar;
    printf("The address of intvar is %p.\n", &intvar);

    printf("\nEnter an integer value: ");
    scanf("%d", &intvar);
    printf("The value you entered was %d.\n", intvar);
    return 0;
}
