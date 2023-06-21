#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to toggle the case of each character in a string
void toggleCase(char *str) {
    while (*str) {
        if (islower(*str)) {
            *str = toupper(*str);
        } else if (isupper(*str)) {
            *str = tolower(*str);
        }
        
        str++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    toggleCase(str);
    
    printf("Toggled Case: %s\n", str);
    
    return 0;
}
