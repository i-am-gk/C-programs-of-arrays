#include <stdio.h>
#define SIZE 9
#define BASE_SALARY 200
#define COMMISSION_RATE 0.09
int main() {
    int salespeople[SIZE] = {0};
    double sales;
    int salary;
    printf("Enter the gross sales for each salesperson:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Salesperson %d: $", i + 1);
        scanf("%lf", &sales);

        // Calculate the salary
        salary = BASE_SALARY + (int)(sales * COMMISSION_RATE);

        // Increment the counter based on the salary range
        if (salary >= 200 && salary <= 299) {
            salespeople[0]++;
        } else if (salary >= 300 && salary <= 399) {
            salespeople[1]++;
        } else if (salary >= 400 && salary <= 499) {
            salespeople[2]++;
        } else if (salary >= 500 && salary <= 599) {
            salespeople[3]++;
        } else if (salary >= 600 && salary <= 699) {
            salespeople[4]++;
        } else if (salary >= 700 && salary <= 799) {
            salespeople[5]++;
        } else if (salary >= 800 && salary <= 899) {
            salespeople[6]++;
        } else if (salary >= 900 && salary <= 999) {
            salespeople[7]++;
        } else if (salary >= 1000) {
            salespeople[8]++;
        }
    }

    printf("\nSalary Range          Number of Salespeople\n");
    printf("$200 - $299           %d\n", salespeople[0]);
    printf("$300 - $399           %d\n", salespeople[1]);
    printf("$400 - $499           %d\n", salespeople[2]);
    printf("$500 - $599           %d\n", salespeople[3]);
    printf("$600 - $699           %d\n", salespeople[4]);
    printf("$700 - $799           %d\n", salespeople[5]);
    printf("$800 - $899           %d\n", salespeople[6]);
    printf("$900 - $999           %d\n", salespeople[7]);
    printf("$1000 and over        %d\n", salespeople[8]);

    return 0;
}

