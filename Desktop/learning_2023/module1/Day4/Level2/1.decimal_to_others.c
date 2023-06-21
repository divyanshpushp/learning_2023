#include <stdio.h>

void decToBinary(int decimal) {
    int binary[32];
    int i = 0;
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    printf("Binary: ");
    
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }
    
    printf("\n");
}

void decToOctal(int decimal) {
    int octal[32];
    int i = 0;
    
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
    
    printf("Octal: ");
    
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", octal[j]);
        }
    }
    
    printf("\n");
}

void decToHexadecimal(int decimal) {
    char hex[32];
    int i = 0;
    
    while (decimal > 0) {
        int remainder = decimal % 16;
        
        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder - 10 + 'A';
        }
        
        decimal = decimal / 16;
        i++;
    }
    
    printf("Hexadecimal: ");
    
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", hex[j]);
        }
    }
    
    printf("\n");
}

int main() {
    int decimal;
    char choice;
    
    do {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        
        printf("Choose an option:\n");
        printf("1. Convert to Binary\n");
        printf("2. Convert to Octal\n");
        printf("3. Convert to Hexadecimal\n");
        printf("Your choice: ");
        scanf(" %c", &choice);
        
        switch (choice) {
            case '1':
                decToBinary(decimal);
                break;
            case '2':
                decToOctal(decimal);
                break;
            case '3':
                decToHexadecimal(decimal);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
