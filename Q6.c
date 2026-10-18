#include <stdio.h>

int main() {
	int data[3][3];
	int key[3][3];
	int encrypted[3][3];
	int value;
	int key_value;
	int max_val = 0;
	int best_val_col = 0;
	int best_val_row = 0;
	
	// Initializing Data Matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Enter value: ");
			scanf("%d", &value);
			data[i][j] = value;
		}
	}
	
	// Initializing Key Matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Enter keys: ");
			scanf("%d", &key_value);
			key[i][j] = key_value;
		}
	}
	
	// Storing Values in Encrypted Matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			encrypted[i][j] = (data[i][j] * key[i][j]) + (i+j);
			
		}
	}
	
	// Showing Encrypted Array in grid form
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d  ", encrypted[i][j]);
		}
		printf("\n");
	}
	
	// Finding Maximum Encrypted Value
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (encrypted[i][j] > max_val) {
				max_val = encrypted[i][j];
				best_val_col = j;
				best_val_row = i;
			}
		}
	}
	
	printf("\nHighest Value: %d", max_val);
	printf("\nStore at Position: (%d,%d)", best_val_row, best_val_col);
	
}