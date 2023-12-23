#include <stdio.h>

int main() {
    int rows = 5,i,j;
    int currentNumber = 1;

    for (i = 1; i <= rows; i++) {
        int spaces = rows - i;

        for (j = 1; j <= spaces; j++) {
            printf("      ");
        }

        for (j = 1; j <= i; j++) {
            printf("%-6d", currentNumber);
            currentNumber += 2;
        }

        printf("\n");
    }

    return 0;
}