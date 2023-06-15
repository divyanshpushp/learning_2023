#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }

    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits in the array: %d\n", totalBits);

    return 0;
}
