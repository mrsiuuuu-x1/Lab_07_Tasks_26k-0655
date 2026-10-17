#include <stdio.h>

int main() {
	int seating[10][4] = {
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0},
    	{0, 0, 0, 0}
	};
	int num, row, col;
	int full_booked_rows = 0;
	
	printf("How many seats you want to book: ");
	scanf("%d", &num);
	
	while ((num < 1) || (num > 40)) {
		printf("Enter valid number of seats: ");
		scanf("%d", &num);
	}
	
	// Reservation Logic
	for (int i = 1; i <= num; i++) {
		printf("\nWhich row you wish to select: ");
		scanf("%d", &row);
		
		while ((row < 1) || (row > 10)) {
			printf("\nEnter a valid row: ");
			scanf("%d", &row);
		}
		
		printf("\nWhich column you wish to select: ");
		scanf("%d", &col);
		
		while ((col < 1) || (col > 4)) {
			printf("\nEnter a valid column: ");
			scanf("%d", &col);
		}
		
		if (seating[row-1][col-1] == 1) {
			printf("\nSeat Already Booked!");
			i--;
		}
		else {
			seating[row-1][col-1] = 1;
			printf("\nSeat at row %d, column %d booked successfully!\n", row, col);
		}
	}
	
	// Checking Fully booked row
	for (int i = 0; i < 10; i++) {
		int full_booked = 0;
		for (int j = 0; j < 4; j++) {
			if (seating[i][j] == 1) {
				full_booked += 1;
			}
		}
		if (full_booked == 4) {
			full_booked_rows += 1;
		}
	}
	printf("\nTotal number of fully booked rows are: %d", full_booked_rows);
	
	// Showing Grid
	printf("\nFinal Look: \n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", seating[i][j]);
		}
		printf("\n");
	}
	
}