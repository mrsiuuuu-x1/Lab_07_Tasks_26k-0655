#include <stdio.h>

int main() {
	int departments;
	int employees;
	int days;
	int bonus = 2000;
	int total_salary = 0;
	
	printf("Enter number of departments: ");
	scanf("%d", &departments);
	
	for (int i = 1; i <= departments; i++) {
		int salary = 0;
		
		printf("\nEnter number of employees in dept %d: ", i);
		scanf("%d", &employees);
		
		for (int j = 1; j <= employees; j++) {
			printf("\nEnter number of days employee %d worked: ", j);
			scanf("%d", &days);
			
			salary = 500 * days;
			
			if (days > 25) {
				salary += bonus;
			}
			total_salary += salary;
			
			printf("\nDepartment %d, Employee %d: Days Worked = %d, Salary = Rs %d", i, j, days, salary);
		}
		printf("\n");
	}
	printf("Total Salary paid out: %d", total_salary);
}