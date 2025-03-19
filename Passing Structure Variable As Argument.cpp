#include <stdio.h>

struct Point {
    int x;
    int y;
};

void printPoint(struct Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point point1 = {3, 4};
    
    printPoint(point1);
    
    return 0;
}
