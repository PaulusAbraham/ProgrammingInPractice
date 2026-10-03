#include <stdio.h>

int main(void)
{
    char supplierName[50];
    float price = 0.0f;
    float budget = 0.0f;
    float lowestQualified = 0.0f;
    int registered = 0;
    int documentsComplete = 0;

    printf("TENDER EVALUATION\n");
    printf("-----------------\n");

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);
    printf("Enter tender price: ");
    scanf("%f", &price);
    printf("Enter available budget: ");
    scanf("%f", &budget);
    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);
    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);
    printf("Lowest price of other qualified suppliers (0 if none): ");
    scanf("%f", &lowestQualified);

    printf("\nSupplier: %s\n", supplierName);

    if (registered == 1 && documentsComplete == 1 && price <= budget)
    {
        if (lowestQualified == 0 || price < lowestQualified)
        {
            printf("Status: Preferred Supplier\n");
        }
        else
        {
            printf("Status: Qualified\n");
        }
    }
    else
    {
        printf("Status: Disqualified\n");
    }

    return 0;
}
