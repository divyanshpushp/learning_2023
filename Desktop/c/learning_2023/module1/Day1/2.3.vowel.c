#include <stdio.h>

int isVowel(char ch) {
    int result;

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1;  // vowel
            break;
        default:
            result = 0;  // not a vowel
            break;
    }

    return result;
}

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isVowel(ch)) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
