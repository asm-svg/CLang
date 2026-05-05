#include <stdio.h>

struct car {
    char name[50];
    int seats;
    float price;
};

int main() {
    struct car myCar;

    printf("Enter name of car:\n");
    fgets(myCar.name, sizeof(myCar.name), stdin);

    printf("Enter number of seats in car:\n");
    scanf("%d", &myCar.seats);

    printf("Enter price of car:\n");
    scanf("%f", &myCar.price);

    printf("\n\nParticulars of car are:\n");
    printf("Car name: %s", myCar.name);
    printf("Number of seats: %d\n", myCar.seats);
    printf("Price: %f\n", myCar.price);

    return 0;
}
