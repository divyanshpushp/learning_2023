#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encode(const char* string) {
    size_t length = strlen(string);
    char* encodedString = malloc((length + 1) * sizeof(char)); // Allocate memory for encoded string
    
    for (size_t i = 0; i < length; i++) {
        encodedString[i] = string[i] + 1; // Perform character substitution
    }
    
    encodedString[length] = '\0'; // Add null terminator to the encoded string
    return encodedString;
}

char* decode(const char* encodedString) {
    size_t length = strlen(encodedString);
    char* decodedString = malloc((length + 1) * sizeof(char)); // Allocate memory for decoded string
    
    for (size_t i = 0; i < length; i++) {
        decodedString[i] = encodedString[i] - 1; // Reverse the character substitution
    }
    
    decodedString[length] = '\0'; // Add null terminator to the decoded string
    return decodedString;
}

int main() {
    char string[100];
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    
    // Remove newline character from fgets input
    size_t len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    
    // Encode the string
    char* encodedString = encode(string);
    printf("Encoded string: %s\n", encodedString);
    
    // Decode the encoded string
    char* decodedString = decode(encodedString);
    printf("Decoded string: %s\n", decodedString);
    
    // Free the dynamically allocated memory
    free(encodedString);
    free(decodedString);
    
    return 0;
}
