#include <stdio.h>

int main() {
    int sales[4][5];
    int sale;
    float bonus = 0.0;
    int max_sales = 0;
    int best_product = 0;
    
    // Initializing Array
    for (int i = 0; i < 4; i++) {
        int total_sales = 0;
        
        for (int j = 0; j < 5; j++) {
            printf("Enter sales for Salesman %d, Product %d: ", i + 1, j + 1);
            scanf("%d", &sale);
            
            sales[i][j] = sale;
            
            // Calculating Total Sales per Salesman
            total_sales += sales[i][j];
        }
        
        // Applying Bonus for High Performers
        printf("\n--- Salesman %d Summary ---\n", i + 1);
        if (total_sales > 10000) {
            bonus = total_sales * 0.10;
            total_sales += bonus;
            printf("10%% Bonus Applied!\n");
        } else {
            printf("No bonus applied.\n");
        }
        printf("Final Total Sales for Salesman %d: %d\n\n", i + 1, total_sales);
    }
    
    // Calculating Total Sales per Product
    printf("--- Product Sales Summary ---\n");
    for (int i = 0; i < 5; i++) {
        int total_product_sales = 0;
        
        for (int j = 0; j < 4; j++) {
            total_product_sales += sales[j][i];
        }
        
        printf("Total Sale of Product %d: %d\n", i + 1, total_product_sales);
        
        // Identifying the Most Expensive Product
        if (total_product_sales > max_sales) {
            max_sales = total_product_sales;
            best_product = i + 1;
        }
    }
    
    // Displaying Final Summary
    printf("\n--- Final Highlights ---\n");
    printf("Most Expensive Product: Product %d\n", best_product);
    printf("Highest Revenue Recorded: Rs. %d\n", max_sales);
    
}