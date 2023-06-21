#include <stdio.h>
#include <math.h>
#include <string.h>

int binaryToDecimal(char binary[]) {
    int length = strlen(binary);
    int decimal = 0;
    int base = 1;
    
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        
        base *= 2;
    }
    
    return decimal;
}

int octalToDecimal(char octal[]) {
    int length = strlen(octal);
    int decimal = 0;
    int base = 1;
    
    for (int i = length - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * base;
        base *= 8;
    }
    
    return decimal;
}

int hexadecimalToDecimal(char hex[]) {
    int length = strlen(hex);
    int decimal = 0;
    int base = 1;
    
    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }
        
        base *= 16;
    }
    
    return decimal;
}

int main() {
    char choice;
    
    do {
        printf("Choose an option:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Octal to Decimal\n");
        printf("3. Hexadecimal to Decimal\n");
        printf("Your choice: ");
        scanf(" %c", &choice);
        
        char input[100];
        
        switch (choice) {
            case '1':
                printf("Enter a binary number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", binaryToDecimal(input));
                break;
            case '2':
                printf("Enter an octal number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", octalToDecimal(input));
                break;
            case '3':
                printf("Enter a hexadecimal number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", hexadecimalToDecimal(input));
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
