#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];

    // Copy the content of 'a' to 'temp'
    char *tempPtr = (char *)a;
    for (size_t i = 0; i < size; i++) {
        temp[i] = tempPtr[i];
    }

    // Copy the content of 'b' to 'a'
    char *aPtr = (char *)a;
    char *bPtr = (char *)b;
    for (size_t i = 0; i < size; i++) {
        aPtr[i] = bPtr[i];
    }

    // Copy the content of 'temp' to 'b'
    for (size_t i = 0; i < size; i++) {
        bPtr[i] = temp[i];
    }
}

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
