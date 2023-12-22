#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    int screenLength;

    printf("Sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Screen length: ");
    scanf("%d", &screenLength);

    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    int spaceCount = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            spaceCount++;
        }
    }

    int starsToAdd = screenLength - strlen(sentence) + spaceCount;

    printf("Justified Sentence: ");
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            for (int j = 0; j < starsToAdd / spaceCount; j++) {
                printf("*");
            }
            starsToAdd -= starsToAdd / spaceCount; 
        } else {
            printf("%c", sentence[i]);
        }
    }

    printf("\n");

    return 0;
}
