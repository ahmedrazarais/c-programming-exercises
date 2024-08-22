// Write a C program that accepts an employee's ID, total worked hours in a month and the amount
// received per hour. Print   salary (with two decimal places) of the employee for a
// particular month and id.

#include <stdio.h>  // Standard Input and Output

int main() {
    char emp_id[100];
    int total_work_hour;
    float pay_per_hour, salary;

    // Input Employee ID
    printf("Enter Employee Id: ");
    scanf("%s", emp_id);

    // Input Total Worked Hours
    printf("Enter Total Work Hours: ");
    scanf("%d", &total_work_hour);

    // Input Pay Per Hour
    printf("Enter Charge Per Hour: ");
    scanf("%f", &pay_per_hour);

    // Calculate Salary
    salary = pay_per_hour * total_work_hour;

    // Output the Employee ID and Salary
    printf("Employee ID: %s\n", emp_id);
    printf("Employee Salary: %.2f\n", salary);

    return 0;
}


