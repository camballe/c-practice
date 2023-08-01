#include <stdio.h>
#include <string.h>

int generateBill(char cost[20], char name[50], char period[20], char meals[10])
{
    printf("\n\n==================== YOUR BILL ====================");
    printf("\n\nNAME: %s", name);
    printf("PERIOD OF STAY:\t%s", period);
    printf("\n\n---------------------------------------------");
    printf("\nTOTAL COST:\t%s (Meals %s)", cost, meals);
    printf("\n---------------------------------------------");

    printf("\n\n================ Enjoy your stay!! =================\n\n");
}

int main()
{
    int choice;
    char customerName[50], periodOfStay[20], costOfMeals[20], charges[20];

    printf("\n\n==================== WELCOME TO CHINGA HOTEL! ====================\nHow long would you like to stay?\n");
    printf("\n1. One day\n2. Two days\n3. Three days\n4. One week");
    printf("\n\nYour choice:\t");
    scanf("%d", &choice);
    getchar();
    printf("What is your name:\t");
    fgets(customerName, 50, stdin);

    switch (choice)
    {
    case 1:
        strcpy(periodOfStay, "One day");
        strcpy(costOfMeals, "KES 3,000");
        strcpy(charges, "KES 5,000");
        generateBill(charges, customerName, periodOfStay, costOfMeals);
        break;
    case 2:
        strcpy(periodOfStay, "Two days");
        strcpy(costOfMeals, "KES 5,000");
        strcpy(charges, "KES 6,000");
        generateBill(charges, customerName, periodOfStay, costOfMeals);
        break;
    case 3:
        strcpy(periodOfStay, "Three days");
        strcpy(costOfMeals, "KES 5,000");
        strcpy(charges, "KES 8,000");
        generateBill(charges, customerName, periodOfStay, costOfMeals);
        break;
    case 4:
        strcpy(periodOfStay, "One week");
        strcpy(costOfMeals, "Free");
        strcpy(charges, "KES 10,000");
        generateBill(charges, customerName, periodOfStay, costOfMeals);
        break;
    default:
        printf("\n\nINVALID CHOICE!! CHOOSE 1, 2, 3 or 4");
        break;
    }
}