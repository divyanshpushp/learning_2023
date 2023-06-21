#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
    // Swap x coordinates
    int temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap y coordinates
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    struct Point point1, point2;

    printf("Enter coordinates for Point 1:\n");
    printf("x: ");
    scanf("%d", &point1.x);
    printf("y: ");
    scanf("%d", &point1.y);

    printf("\nEnter coordinates for Point 2:\n");
    printf("x: ");
    scanf("%d", &point2.x);
    printf("y: ");
    scanf("%d", &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the points using pointers
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
