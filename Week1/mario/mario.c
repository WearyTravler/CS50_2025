#include <stdio.h>

int main() {
    int tower_height;

    
    printf("Welcome to the Super Mario Tower Builder! How tall would you like your tower: ");
    scanf("%d", &tower_height);
    
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