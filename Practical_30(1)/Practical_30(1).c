#include <stdio.h>

// Function to sort prices using pointer arithmetic
void sortPrices(float *prices, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(prices + i) > *(prices + j)) {
                // Swap using pointer dereferencing
                float temp = *(prices + i);
                *(prices + i) = *(prices + j);
                *(prices + j) = temp;
            }
        }
    }
}

// Function to display prices
void displayPrices(float *prices, int n) {
    printf("\nSorted Prices (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f, ", *(prices + i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of items in inventory: ");
    scanf("%d", &n);

    float prices[n];  // Array to store prices

    // Input prices
    printf("Enter the prices of %d items:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", (prices + i));  // Using pointer arithmetic
    }

    // Sort prices
    sortPrices(prices, n);

    // Display sorted prices
    displayPrices(prices, n);
    printf("This program is developed by Dev Bumtariya.");

    return 0;
}
