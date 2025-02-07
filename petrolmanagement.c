#include <stdio.h>

int main() {
    int choice;
    float quantity, cost;

    printf("\t=====================================\n");
    printf("\t Petrol Station Management System\n");
    printf("\t=====================================\n");
    printf("1. Refill Petrol (Rs. 75/litre)\n");
    printf("2. Refill Diesel (Rs. 90/litre)\n");
    printf("3. Refill CNG (Rs. 60/kg)\n");
    printf("4. Tyre Inflation\n");
    printf("5. Vehicle Servicing\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter quantity of Petrol in litres: ");
            scanf("%f", &quantity);
            cost = quantity * 75;
            printf("Total cost: Rs. %.2f\n", cost);
            break;
        case 2:
            printf("Enter quantity of Diesel in litres: ");
            scanf("%f", &quantity);
            cost = quantity * 90;
            printf("Total cost: Rs. %.2f\n", cost);
            break;
        case 3:
            printf("Enter quantity of CNG in kg: ");
            scanf("%f", &quantity);
            cost = quantity * 60;
            printf("Total cost: Rs. %.2f\n", cost);
            break;
        case 4:
            printf("Tyre inflation service selected. No cost.\n");
            break;
        case 5:
            printf("Vehicle servicing selected. No cost.\n");
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}