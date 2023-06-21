#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

// Function to calculate the number of days elapsed
int calculateDaysElapsed(int day, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust days in February for leap year
    if (isLeapYear(year))
        daysInMonth[1] = 29;
    
    int days = 0;
    
    for (int i = 0; i < month - 1; i++) {
        days += daysInMonth[i];
    }
    
    days += day;
    
    return days;
}

int main() {
    int day, month, year;
    
    printf("Enter the date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    
    int daysElapsed = calculateDaysElapsed(day, month, year);
    
    printf("Number of days elapsed in the year: %d\n", daysElapsed);
    
    return 0;
}
