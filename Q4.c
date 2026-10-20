#include <stdio.h>

int main() {
    float temp[3][3][3];
    float layer_avgs[3];
    float max_temp = -999.0;
    int max_x = 0, max_y = 0, max_z = 0;
    float max_layer_avg = -999.0;
    int hottest_layer = 0;

    // Initialize the Temperature Data
    for (int z = 0; z < 3; z++) {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                printf("Enter temperature for coordinate (x=%d, y=%d, z=%d): ", x, y, z);
                scanf("%f", &temp[z][y][x]);
                
                // Find the Maximum Temperature Point during input
                if (temp[z][y][x] > max_temp) {
                    max_temp = temp[z][y][x];
                    max_x = x;
                    max_y = y;
                    max_z = z;
                }
            }
        }
    }

    // Calculate Average Temperature per Layer
    for (int z = 0; z < 3; z++) {
        float layer_sum = 0;
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                layer_sum += temp[z][y][x];
            }
        }
        layer_avgs[z] = layer_sum / 9.0;
        
        // Identify the Hottest Layer
        if (layer_avgs[z] > max_layer_avg) {
            max_layer_avg = layer_avgs[z];
            hottest_layer = z;
        }
    }

    // Display the Final Results
    printf("\n--- Final Results ---\n");
    for (int z = 0; z < 3; z++) {
        printf("Average temperature of Layer %d: %.2f\n", z, layer_avgs[z]);
    }
    printf("Hottest Layer: Layer %d with an average of %.2f\n", hottest_layer, max_layer_avg);
    printf("Maximum Temperature: %.2f at coordinates (x=%d, y=%d, z=%d)\n", max_temp, max_x, max_y, max_z);

    return 0;
}