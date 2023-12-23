#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    int i,j;
    printf("Input: ");
    scanf("%s", input);

    for (i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            char currentChar = input[i];
            int count = 0;

            while (isdigit(input[i + 1])) {
                count = count * 10 + (input[i + 1] - '0');
                i++;
            }

            for (j = 0; j < count; j++) {
                printf("%c", currentChar);
            }
        }
    }

    printf("\n");

    return 0;
}