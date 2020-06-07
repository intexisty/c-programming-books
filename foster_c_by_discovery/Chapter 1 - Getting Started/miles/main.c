#include <stdio.h>

#define MILEAGE 28

inline int miles (int num_gallons, int mileage);

int main() {
    int gallons;
    printf("Travel calculator");
    printf("Current mileage is %d miles per gallon.\n", MILEAGE);
    printf("\n\nEnter the gallons of gas (whole numbers please): ");
    scanf("%d", &gallons);

    printf("Thank you. You will be able to travel %d miles.\n", miles(gallons, MILEAGE));
    return 0;
}

inline int miles(int num_gallons, int mileage) {
    return (num_gallons * mileage);
}