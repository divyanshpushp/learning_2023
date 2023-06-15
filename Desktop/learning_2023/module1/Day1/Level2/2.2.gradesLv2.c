#include <stdio.h>

char getGrade(int score) {
    char grade;
    
    switch(score) {
        case 90 ... 100:
            grade = 'A';
            break;
        case 75 ... 89:
            grade = 'B';
            break;
        case 60 ... 74:
            grade = 'C';
            break;
        case 50 ... 59:
            grade = 'D';
            break;
        case 36 ... 49:
            grade = 'E';
            break;
        case 0 ... 35:
            grade = 'F';
            break;
        default:
            grade = '\0'; // Invalid score
            break;
    }
    
    return grade;
}

int main() {
    int score;
    
    printf("Enter the student's score: ");
    scanf("%d", &score);
    
    char grade = getGrade(score);
    
    switch(grade) {
        case 'A':
            printf("65 -> Grade A\n");
            break;
        case 'B':
            printf("66 -> Grade B\n");
            break;
        case 'C':
            printf("67 -> Grade C\n");
            break;
        case 'D':
            printf("68 -> Grade D\n");
            break;
        case 'E':
            printf("69 -> Grade E\n");
            break;
        case 'F':
            printf("70 -> Grade F\n");
            break;
        default:
            printf("Invalid score\n");
            break;
    }
    
    return 0;
}
