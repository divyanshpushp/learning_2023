#include <stdio.h>
#include <string.h>

void rotateString(char *str, int positions, char direction) {
    int length = strlen(str);
    if (length == 0) {
        return;  // No need to rotate an empty string
    }
    
    positions = positions % length;
    
    // Rotate the string by moving characters to the left or right
    if (direction == 'L') {
        for (int i = 0; i < positions; i++) {
            char firstChar = str[0];
            
            for (int j = 0; j < length - 1; j++) {
                str[j] = str[j + 1];
            }
            
            str[length - 1] = firstChar;
        }
    } else if (direction == 'R') {
        for (int i = 0; i < positions; i++) {
            char lastChar = str[length - 1];
            
            for (int j = length - 1; j > 0; j--) {
                str[j] = str[j - 1];
            }
            
            str[0] = lastChar;
        }
    }
}

int main() {
    char str[100];
    int positions;
    char direction;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);
    
    printf("Enter the rotation direction (L for left, R for right): ");
    scanf(" %c", &direction);
    
    printf("\nOriginal String: %s\n", str);
    
    rotateString(str, positions, direction);
    
    printf("Rotated String: %s\n", str);
    
    return 0;
}
