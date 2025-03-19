#include<stdio.h>
int add(int x, int y) {
   int len;
   len = printf("%*c%*c", x, ' ', y, ' ');
   return len;
}
main() {
   int x = 10, y = 20;
   int res = add(x, y);
   printf("\nThe result is: %d", res);
}