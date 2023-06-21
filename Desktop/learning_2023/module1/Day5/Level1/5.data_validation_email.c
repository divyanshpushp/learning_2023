#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidEmail(const char *email) {
    int length = strlen(email);
    
    int atIndex = -1;
    int dotIndex = -1;
    int i;
    
    // Find the index of '@' and '.'
    for (i = 0; i < length; i++) {
        if (email[i] == '@') {
            atIndex = i;
        } else if (email[i] == '.') {
            dotIndex = i;
        }
        
        // Break the loop if both '@' and '.' are found
        if (atIndex != -1 && dotIndex != -1) {
            break;
        }
    }
    
    // Check if '@' and '.' are present and in valid positions
    if (atIndex == -1 || dotIndex == -1 || atIndex > dotIndex) {
        printf("Invalid email format: Missing or incorrect '@' and/or '.'\n");
        return 0;
    }
    
    // Check the username
    for (i = 0; i < atIndex; i++) {
        if (!isalnum(email[i]) && email[i] != '.') {
            printf("Invalid email format: Invalid character '%c' in the username\n", email[i]);
            return 0;
        }
    }
    
    // Check the domain name
    for (i = atIndex + 1; i < dotIndex; i++) {
        if (!islower(email[i])) {
            printf("Invalid email format: Uppercase character '%c' not allowed in the domain name\n", email[i]);
            return 0;
        }
    }
    
    // Check the extension
    for (i = dotIndex + 1; i < length; i++) {
        if (!islower(email[i])) {
            printf("Invalid email format: Invalid character '%c' in the extension\n", email[i]);
            return 0;
        }
    }
    
    return 1;  // Email is valid
}

int main() {
    char email[100];
    
    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);
    
    // Remove newline character from fgets
    email[strcspn(email, "\n")] = '\0';
    
    if (isValidEmail(email)) {
        printf("Valid email format.\n");
    }
    
    return 0;
}
