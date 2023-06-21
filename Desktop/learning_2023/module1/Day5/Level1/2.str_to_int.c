
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int stringToInteger(const char *str, int *type) {
    char *endptr;
    long int result = strtol(str, &endptr, 10);
    
    if (str == endptr) {
        *type = 0; // Invalid conversion
    } else if (*endptr != '\0') {
        *type = 1; // Partial conversion
    } else {
        *type = 2; // Successful conversion
    }
    
    return (int)result;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    int type;
    int number = stringToInteger(str, &type);
    
    if (type == 0) {
        printf("Invalid conversion.\n");
    } else if (type == 1) {
        printf("Partial conversion. Converted Integer: %d\n", number);
    } else {
        printf("Successful conversion. Converted Integer: %d\n", number);
    }
    
    return 0;
}
