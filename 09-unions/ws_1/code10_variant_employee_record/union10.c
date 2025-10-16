#include <stdio.h>

#define MAX 3

struct Employee {
    char name[30];
    int type; // 0 = salary, 1 = hourly
    union {
        float salary;
        float hourlyWage;
    };
};

int main() {
    struct Employee emp[MAX];
    int i;

    for(i = 0; i < MAX; i++) {
        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter type (0=salary, 1=hourly): ");
        scanf("%d", &emp[i].type);

        if(emp[i].type == 0) {
            printf("Enter salary: ");
            scanf("%f", &emp[i].salary);
        } else {
            printf("Enter hourly wage: ");
            scanf("%f", &emp[i].hourlyWage);
        }
    }

    printf("\nEmployee Details:\n");
    for(i = 0; i < MAX; i++) {
        printf("Name: %s, ", emp[i].name);
        if(emp[i].type == 0)
            printf("Salary: %.2f\n", emp[i].salary);
        else
            printf("Hourly Wage: %.2f\n", emp[i].hourlyWage);
    }

    return 0;
}
