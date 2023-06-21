#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeTotalSeconds(const char *timeString) {
    int hours, minutes, seconds;
    
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);
    
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    
    return totalSeconds;
}

int main() {
    char timeString[9];
    
    printf("Enter the time (hh:mm:ss): ");
    fgets(timeString, sizeof(timeString), stdin);
    
    // Remove newline character from fgets
    timeString[strcspn(timeString, "\n")] = '\0';
    
    int totalSeconds = computeTotalSeconds(timeString);
    
    printf("Total seconds: %d\n", totalSeconds);
    
    return 0;
}
