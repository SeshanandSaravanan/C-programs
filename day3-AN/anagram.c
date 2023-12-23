#include <stdio.h>
#include <string.h>
int areAnagrams(char s[], char t[]) {
    int lenS = strlen(s);
    int lenT = strlen(t);
    if (lenS != lenT) {
        return 0;
    }
    int count[256] = {0};
    for (int i = 0; i < lenS; i++) {
        count[(int)s[i]]++;
    }
    for (int i = 0; i < lenT; i++) {
        count[(int)t[i]]--;
        if (count[(int)t[i]] < 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char s[100];
    char t[100];
    printf("Enter the first string: ");
    scanf("%s", s);
printf("Enter the second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("%s and %s are anagrams.\n", s, t);
    } else {
        printf("%s and %s are not anagrams.\n", s, t);
    }

    return 0;
}