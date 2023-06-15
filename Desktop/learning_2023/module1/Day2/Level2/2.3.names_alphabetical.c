#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortNames(char *names[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char *temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void printNames(char *names[], int size) {
    printf("Sorted Names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
}

int main() {
    int size;

    printf("Enter the number of names: ");
    scanf("%d", &size);

    char **names = malloc(size * sizeof(char *));

    printf("Enter the names:\n");
    for (int i = 0; i < size; i++) {
        char input[100];
        scanf("%s", input);
        names[i] = malloc((strlen(input) + 1) * sizeof(char));
        strcpy(names[i], input);
    }

    printf("Original Names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }

    sortNames(names, size);

    printNames(names, size);

    // Free allocated memory
    for (int i = 0; i < size; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}
