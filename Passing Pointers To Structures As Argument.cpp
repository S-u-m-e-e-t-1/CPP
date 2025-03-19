#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

void calculateArea(struct Rectangle* rect) {
    int area = rect->length * rect->width;
    printf("Area: %d\n", area);
}

int main() {
    struct Rectangle myRect = {5, 8};
    
    calculateArea(&myRect);
    
    return 0;
}
