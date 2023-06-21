#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        // If the key is found, return the index
        if (array[i] == key) {
            return i;
        }
    }
    
    // If the key is not found, return -1
    return -1;
}

int main() {
    int size, key;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("\nInput Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    printf("\n");
    
    // Perform Linear Search
    int index = linearSearch(array, size, key);
    
    if (index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}
