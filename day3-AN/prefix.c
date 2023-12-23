#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int strsSize, char* result) {
    if (strsSize == 0) {
        strcpy(result, "");
        return;
    }

    int i, j;
    strcpy(result, strs[0]);

    for (i = 1; i < strsSize; i++) {
        j = 0;
        while (result[j] && strs[i][j] && result[j] == strs[i][j]) {
            j++;
        }
        result[j] = '\0';
    }
}

int main() {
    int n = 5;
 char strs[n][100];
    char result[100];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strs[i]);
    }

    longestCommonPrefix(strs, n, result);

    printf("Longest common prefix: %s\n", result);

    return 0;
}