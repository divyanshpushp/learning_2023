#include <stdio.h>
#include <ctype.h>

int character_type(char ch) {
    if (isalpha(ch)) {
        if (isupper(ch))
            return 1; // Uppercase letter
        else
            return 2; // Lowercase letter
    } else if (isdigit(ch)) {
        return 3; // Digit
    } else if (isprint(ch)) {
        return 4; // Other printable symbol
    } else {
        return 5; // Non-printable symbol
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    int type = character_type(ch);

    switch (type) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Other printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
            break;
    }

    return 0;
}
