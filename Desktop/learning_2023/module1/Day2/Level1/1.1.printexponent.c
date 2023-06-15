#include <stdio.h>

void printExponent(double num) {
    // Extracting the exponent part using bit manipulation
    unsigned long long bits = *(unsigned long long*)&num;
    unsigned int exponent = (bits >> 52) & 0x7FF;
    
    // Printing the exponent in hexadecimal and binary format
    printf("Exponent (hex): 0x%X\n", exponent);
    
    printf("Exponent (binary): 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x;
    
    printf("Enter a floating point number: ");
    scanf("%lf", &x);
    
    printExponent(x);
    
    return 0;
}

