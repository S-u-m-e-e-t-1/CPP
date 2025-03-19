#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) {
            printf("  ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        
        for (int l= i - 1; l >= 1; l--) {
            printf("%d ", l);
        }
        
        printf("\n");
    }
    
    for (int i = 5 - 1; i >= 1; i--) {
        for (int j = i; j < 5; j++) {
            printf("  ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        
        for (int l = i - 1; l >= 1; l--) {
            printf("%d ", l);
        }
        
        printf("\n");
    }
    
    return 0;
}
