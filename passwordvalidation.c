#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isPasswordValid(const char* password) {
    int length = 0;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;
    int specialCharCount = 0;

    while (password[length] != '\0') {
        if (isupper(password[length])) {
            uppercaseCount++;
        } else if (islower(password[length])) {
            lowercaseCount++;
        } else if (isdigit(password[length])) {
            digitCount++;
        } else {
            specialCharCount++;
        }
        length++;
    }

    if (length >= 8 && uppercaseCount > 0 && lowercaseCount > 0 && digitCount > 0 && specialCharCount > 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char password[100];

    printf("Enter a password: ");
    scanf("%s", password);

    if (isPasswordValid(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is not valid.\n");
    }

    return 0;
}
