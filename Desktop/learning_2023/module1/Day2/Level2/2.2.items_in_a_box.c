#include <stdio.h>

int compareBoxes(int A[], int B[], int size) {
    int countA[1000] = {0};  // Assuming the maximum item value is 1000
    int countB[1000] = {0};

    // Count the occurrence of each item in box A
    for (int i = 0; i < size; i++) {
        countA[A[i] + 500]++;  // Adjusting the index to handle negative values
    }

    // Count the occurrence of each item in box B
    for (int i = 0; i < size; i++) {
        countB[B[i] + 500]++;  // Adjusting the index to handle negative values
    }

    // Compare the item counts
    for (int i = 0; i < 1000; i++) {
        if (countA[i] != countB[i]) {
            return 0;  // Item counts are not equal, return 0
        }
    }

    return 1;  // All item counts are equal, return 1
}

int main() {
    int size;

    printf("Enter the size of the boxes: ");
    scanf("%d", &size);

    int A[size];
    int B[size];

    printf("Enter the items for box A:\n");
    for (int i = 0; i < size; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Enter the items for box B:\n");
    for (int i = 0; i < size; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    int result = compareBoxes(A, B, size);

    printf("Result: %d\n", result);

    return 0;
}
