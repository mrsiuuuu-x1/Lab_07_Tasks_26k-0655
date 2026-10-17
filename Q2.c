#include <stdio.h>

int main() {
    int sudoko[3][3];
    int value;
    int isValid = 1;

    // Storing values in Array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter a value: ");
            scanf("%d", &value);
            sudoko[i][j] = value;
        }
    }

    // Validating Number Range and Duplicate Values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int temp = sudoko[i][j];

            if (temp < 0 || temp > 9) {
                isValid = 0;
            }

            if (temp != 0) {
                for (int r = 0; r < 3; r++) {
                    for (int c = 0; c < 3; c++) {
                        if ((i != r || j != c) && temp == sudoko[r][c]) {
                            isValid = 0;
                        }
                    }
                }
            }
        }
    }

    if (isValid == 1) {
        printf("\nValid Grid");
    } else {
        printf("\nInvalid Grid");
    }

    return 0;
}