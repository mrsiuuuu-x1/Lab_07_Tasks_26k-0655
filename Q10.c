#include <stdio.h>

int main() {
    int classes, school_tot = 0, school_stu = 0;
    
    printf("Enter number of classes: ");
    scanf("%d", &classes);

    for (int i = 1; i <= classes; i++) {
        int students, class_tot = 0;
        
        printf("\nEnter number of students in class %d: ", i);
        scanf("%d", &students);
        school_stu += students;

        for (int j = 1; j <= students; j++) {
            int subjects, total = 0, result = 1;
            
            printf("Enter number of subjects of student %d: ", j);
            scanf("%d", &subjects);

            for (int k = 1; k <= subjects; k++) {
                int marks;
                printf("Enter marks for subject %d: ", k);
                scanf("%d", &marks);
                total += marks;
                if (marks < 40) result = 0;
            }

            class_tot += total;
            printf("Class %d, Student %d: Total Marks = %d, Average = %.2f, Result = %s\n", i, j, total, (float)total / subjects, result == 1 ? "Pass" : "Fail");
        }

        school_tot += class_tot;
        printf("\nTotal marks of all students in Class %d: %d\nClass %d Average: %.2f\n", i, class_tot, i, students > 0 ? (float)class_tot / students : 0);
    }

    printf("\nTotal marks of all students across all classes: %d\nOverall School Average: %.2f\n", school_tot, school_stu > 0 ? (float)school_tot / school_stu : 0);

}