#include <stdio.h>

int main(void) {
    double revenue = 0.0;
    double expenses = 0.0;
    double balance = 0.0;
    int departments = 0;
    double payroll = 0.0;
    double procurement = 0.0;
    double assets = 0.0;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);
    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\nRevenue : %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance : %.2f\n", balance);

    printf("\n--- Extension ---\n");
    printf("Enter Number of Departments: ");
    scanf("%d", &departments);
    printf("Enter Payroll: ");
    scanf("%lf", &payroll);
    printf("Enter Procurement: ");
    scanf("%lf", &procurement);
    printf("Enter Assets: ");
    scanf("%lf", &assets);

    printf("\nMUNICIPAL FINANCIAL SUMMARY\n");
    printf("----------------------------\n");
    printf("Departments: %d\n", departments);
    printf("Revenue    : %.2f\n", revenue);
    printf("Expenses   : %.2f\n", expenses);
    printf("Balance    : %.2f\n", balance);
    printf("Payroll    : %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets     : %.2f\n", assets);

    return 0;
}
