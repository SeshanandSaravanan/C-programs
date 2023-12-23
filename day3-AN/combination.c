#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char phoneMap[][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void backtrack(char combination[], char digits[], int index, char result[][5], int *returnSize) {
    if (index == strlen(digits)) {
        combination[index] = '\0';
        strcpy(result[(*returnSize)++], combination);
        return;
    }

    int digit = digits[index] - '0';
    const char *letters = phoneMap[digit];

    for (int i = 0; i < strlen(letters); i++) {
        combination[index] = letters[i];
        backtrack(combination, digits, index + 1, result, returnSize);
    }
}

void letterCombinations(char digits[], char result[][5], int *returnSize) {
    int length = strlen(digits);
if (length == 0) {
        *returnSize = 0;
        return;
    }

    int totalCombinations = 1;
    for (int i = 0; i < length; i++) {
        int digit = digits[i] - '0';
        totalCombinations *= strlen(phoneMap[digit]);
    }

    char combination[length + 1];
    *returnSize = 0;

    backtrack(combination, digits, 0, result, returnSize);
}

int main() {
    char digits[50];
    printf("Enter digits: ");
    scanf("%s", digits);

    int returnSize;
    char combinations[5000][5]; 

    letterCombinations(digits, combinations, &returnSize);

    printf("Output:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", combinations[i]);
    }

    return 0;
}