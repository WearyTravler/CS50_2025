#include <stdio.h>

int main() {
    int tower_height;

    // Get user input
    printf("Welcome to the Super Mario Tower Builder! How tall would you like your tower: ");
    scanf("%d", &tower_height);

    // Loop through each row
    for (int row = 1; row <= tower_height; row++) {

        // Print leading spaces (to right-align the left tower)
        for (int space = 0; space < (tower_height - row); space++) {
            printf(" ");
        }

        // Print left tower blocks
        for (int hash = 0; hash < row; hash++) {
            printf("#");
        }

        // Print gap between towers
        printf("  ");

        // Print right tower blocks (same as left)
        for (int hash = 0; hash < row; hash++) {
            printf("#");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}