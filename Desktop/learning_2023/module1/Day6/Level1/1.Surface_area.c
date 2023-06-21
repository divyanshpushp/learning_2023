#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box *box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    struct Box *ptrBox = &myBox;
    
    printf("Enter the dimensions of the box in same units:\n");
    printf("Length: ");
    scanf("%lf", &(ptrBox->length));
    printf("Width: ");
    scanf("%lf", &(ptrBox->width));
    printf("Height: ");
    scanf("%lf", &(ptrBox->height));
    
    double volume = calculateVolume(ptrBox);
    double surfaceArea = calculateSurfaceArea(ptrBox);
    
    printf("\nVolume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
    
    return 0;
}
