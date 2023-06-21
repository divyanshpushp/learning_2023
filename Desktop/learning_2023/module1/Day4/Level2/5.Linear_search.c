#include <stdio.h>

// Function to perform linear search
int linearSearch(int array[], int size, int key) {
    int found = 0; // Flag variable to indicate if key element is found
    
    for (int i = 0; i < size; i++) {
        // Compare key element with each element in the array
        if (array[i] == key) {
            found = 1;
            break;
        }
    }
    
    return found;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    int key;
    
    printf("\nEnter the key element to search: ");
    scanf("%d", &key);
    
    printf("\nInput Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    int found = linearSearch(array, size, key);
    
    if (found) {
        printf("Element %d is found in the array.\n", key);
    } else {
        printf("Element %d is not found in the array.\n", key);
    }
    
    return 0;
}
