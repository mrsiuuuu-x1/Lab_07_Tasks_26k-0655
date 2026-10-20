#include <stdio.h>

int main() {
    int marks[2][3][3];
    int student_totals[2][3] = {0};
    
    int overall_topper_total = -1;
    int overall_topper_class = 0;
    int overall_topper_student = 0;

    // Initialize the Marks Data
    for (int c = 0; c < 2; c++) {
        for (int s = 0; s < 3; s++) {
            for (int sub = 0; sub < 3; sub++) {
                printf("Enter marks for Class %d, Student %d, Subject %d: ", c + 1, s + 1, sub + 1);
                scanf("%d", &marks[c][s][sub]);
                
                // Calculate Total Marks per Student
                student_totals[c][s] += marks[c][s][sub];
            }
            printf("Total marks for Class %d, Student %d: %d\n\n", c + 1, s + 1, student_totals[c][s]);
            
            // Identify the Overall Topper
            if (student_totals[c][s] > overall_topper_total) {
                overall_topper_total = student_totals[c][s];
                overall_topper_class = c + 1;
                overall_topper_student = s + 1;
            }
        }
    }

    printf("\n--- Final Results ---\n");

    // Identify and Display the Class Topper
    for (int c = 0; c < 2; c++) {
        int class_topper_total = -1;
        int class_topper_student = 0;
        
        for (int s = 0; s < 3; s++) {
            if (student_totals[c][s] > class_topper_total) {
                class_topper_total = student_totals[c][s];
                class_topper_student = s + 1;
            }
        }
        printf("Top Performer of Class %d: Student %d with %d marks\n", c + 1, class_topper_student, class_topper_total);
    }

    // Display Overall Topper
    printf("Overall Topper: Class %d, Student %d with %d marks\n", overall_topper_class, overall_topper_student, overall_topper_total);

    return 0;
}