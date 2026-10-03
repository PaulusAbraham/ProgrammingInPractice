#include <stdio.h>
#include <string.h>

#define SALARIES 50
#define DEPARTMENTS 10
#define VEHICLES 20

int main(void)
{
    float salaries[SALARIES];
    float budgets[DEPARTMENTS];
    char registrations[VEHICLES][20];

    float total = 0.0f, average = 0.0f, highest = 0.0f, lowest = 0.0f;
    float temp = 0.0f, searchSalary = 0.0f;
    char searchReg[20];
    int found = 0;

    printf("MUNICIPAL INFORMATION MANAGEMENT SYSTEM\n");
    printf("=======================================\n");

    /* ---------- A. EMPLOYEE SALARIES ---------- */
    printf("\n--- A. Employee Salaries ---\n");
    for (int i = 0; i < SALARIES; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\nAll salaries:\n");
    total = 0.0f;
    highest = salaries[0];
    lowest = salaries[0];
    for (int i = 0; i < SALARIES; i++)
    {
        printf("%d. %.2f\n", i + 1, salaries[i]);
        total = total + salaries[i];
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }
        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }
    average = total / SALARIES;
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary : %.2f\n", lowest);

    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);
    found = 0;
    for (int i = 0; i < SALARIES; i++)
    {
        if (salaries[i] == searchSalary)
        {
            found = 1;
            printf("Salary found at position %d\n", i + 1);
            break;
        }
    }
    if (!found)
    {
        printf("Salary not found.\n");
    }

    /* ---------- B. DEPARTMENT BUDGETS ---------- */
    printf("\n--- B. Department Budgets ---\n");
    for (int i = 0; i < DEPARTMENTS; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\nBudgets:\n");
    total = 0.0f;
    for (int i = 0; i < DEPARTMENTS; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
        total = total + budgets[i];
    }
    average = total / DEPARTMENTS;
    printf("Total budget  : %.2f\n", total);
    printf("Average budget: %.2f\n", average);

    /* bubble sort, lowest to highest */
    for (int i = 0; i < DEPARTMENTS - 1; i++)
    {
        for (int j = 0; j < DEPARTMENTS - i - 1; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }
    printf("\nBudgets sorted (lowest to highest):\n");
    for (int i = 0; i < DEPARTMENTS; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    /* ---------- C. VEHICLE REGISTRATIONS ---------- */
    printf("\n--- C. Vehicle Registrations ---\n");
    for (int i = 0; i < VEHICLES; i++)
    {
        printf("Enter vehicle registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\nVehicle registrations:\n");
    for (int i = 0; i < VEHICLES; i++)
    {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    printf("\nEnter a registration to search for: ");
    scanf("%19s", searchReg);
    found = 0;
    for (int i = 0; i < VEHICLES; i++)
    {
        if (strcmp(registrations[i], searchReg) == 0)
        {
            found = 1;
            printf("Registration found at position %d\n", i + 1);
            break;
        }
    }
    if (!found)
    {
        printf("Registration not found.\n");
    }

    return 0;
}
