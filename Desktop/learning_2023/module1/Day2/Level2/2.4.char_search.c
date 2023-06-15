#include <stdio.h>
#include <string.h>


char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;  // Character found, return pointer to it
        }
        string++;  // Move to the next character
    }
    
    return NULL;  // Character not found, return NULL
}

int main() {
    char string[100];
    char ch;
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Enter a character to search: ");
    scanf("%c", &ch);
    
    // Remove newline character from fgets input
    size_t len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    
    char *result = xstrchr(string, ch);
    
    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", ch, result - string);
        printf("Pointer to the character: %p\n", result);
    } else {
        printf("Character '%c' not found\n", ch);
    }
    
    return 0;
}
