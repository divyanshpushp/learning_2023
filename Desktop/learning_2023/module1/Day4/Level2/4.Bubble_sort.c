#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Flag to check if any swaps occurred in this pass
        int swapped = 0;
        
        for (int j = 0; j < size - i - 1; j++) {
            // Swap adjacent elements if they are in the wrong order
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                
                swapped = 1;
            }
        }
        
        // If no swaps occurred in this pass, the array is already sorted
        if (swapped == 0)
            break;
        
        // Print the array after each pass
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < size; k++) {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
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
    
    printf("\nInput Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    
    bubbleSort(array, size);
    
    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
