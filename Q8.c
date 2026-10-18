#include <stdio.h>

int main() {
	// Reverse Right Angle * pattern
	for (int i = 1; i <= 5; i++) {
		for (int total_rows = 5; total_rows >= i; total_rows--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	// Reverse Right Angle numbered pattern
	for (int i = 1; i <= 5; i++) {
		for (int total_rows = 5; total_rows >= i; total_rows--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	// Reverse Right Angle alphabet pattern
	for (char i = 'A'; i <= 'E'; i++) {
		for (char total_rows = 'E'; total_rows >= i; total_rows--) {
			printf(" ");
		}
		for (char j = 'A'; j <= i; j++) {
			printf("%c", j);
		}
		printf("\n");
	}
	
	// * pyramid pattern
	for (int i = 1; i <= 10; i+=2) {
		for (int total_rows = 10; total_rows >= i; total_rows--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	// numbered pyramid pattern
	for (int i = 1; i <= 10; i+=2) {
		for (int total_rows = 10; total_rows >= i; total_rows--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	// alphabet pyramid pattern
	for (char i = 'A'; i <= 'J'; i+=2) {
		for (char total_rows = 'J'; total_rows >= i; total_rows--) {
			printf(" ");
		}
		for (char j = 'A'; j <= i; j++) {
			printf("%c ", j);
		}
		printf("\n");
	}
}