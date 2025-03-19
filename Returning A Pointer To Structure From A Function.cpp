#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point* createPoint(int x, int y) {
    struct Point* p = (struct Point*)malloc(sizeof(struct Point));
    p->x = x;
    p->y = y;
    return p;
}

int main() {
    struct Point* point1 = createPoint(3, 4);
    printf("Point: (%d, %d)\n", point1->x, point1->y);
    
    // Don't forget to free the memory when done
    free(point1);
    
    return 0;
}
