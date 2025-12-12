#include <stdio.h>

int main(void) {
    int tower_height;


    do {
        printf("Height: ");
        if (scanf("%d", &tower_height) != 1) {

            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            tower_height = 0;
        }
    } while (tower_height < 1 || tower_height > 8);

    // Build the tower
    for (int row = 1; row <= tower_height; row++) {

        for (int space = 0; space < (tower_height - row); space++) {
            printf(" ");
        }

        for (int hash = 0; hash < row; hash++) {
            printf("#");
        }

        printf("  ");

        for (int hash = 0; hash < row; hash++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
