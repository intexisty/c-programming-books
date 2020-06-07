#include <stdio.h>

#define HOUR 3600
#define MINUTE 60

int main() {
    int input;
    printf("Enter the number of seconds: ");
    scanf("%d", &input);

    printf("%d hour(s), %d minute(s), %d second(s)", input / HOUR, (input % HOUR) / MINUTE, input % MINUTE);

    return 0;
}
