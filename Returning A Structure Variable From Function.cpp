#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Date createDate(int d, int m, int y) {
    struct Date date;
    date.day = d;
    date.month = m;
    date.year = y;
    return date;
}

int main() {
    struct Date today = createDate(10, 9, 2023);
    printf("Today's date: %d/%d/%d\n", today.day, today.month, today.year);
    
    return 0;
}
