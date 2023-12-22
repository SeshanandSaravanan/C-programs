#include <stdio.h>
#include <string.h>

int isLowerCase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int isUpperCase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int isSpecialChar(char ch) {
    char specialChars[] = "!@#$%^&*()-+";
    int i;
    for (i = 0; i < strlen(specialChars); i++) {
        if (ch == specialChars[i]) {
            return 1;
        }
    }
    
    return 0;
}

int isStrongPassword(char password[]) {
    int length = strlen(password);
    int i;
    int hasLowerCase = 0, hasUpperCase = 0, hasSpecialChar = 0, hasDigit = 0;

    for (i = 0; i < length; i++) {
        if (isLowerCase(password[i])) {
            hasLowerCase = 1;
        } else if (isUpperCase(password[i])) {
            hasUpperCase = 1;
        } else if (isDigit(password[i])) {
            hasDigit = 1;
        } else if (isSpecialChar(password[i])) {
            hasSpecialChar = 1;
        }
    }

    if (hasLowerCase && hasUpperCase && hasDigit && hasSpecialChar && length >= 8) {
        return 1; // Strong password
    } else {
        return 0; // Not a strong password
    }
}

int main() {
    char password[100];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) {
        printf("The password is strong.\n");
    } else {
        printf("The password is not strong.\n");
    }

    return 0;
}

