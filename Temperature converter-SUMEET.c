#include <stdio.h>

int main() {
    float temp;
    char unit;

    printf("Enter the temp value: ");
    scanf("%f", &temp);

    printf("Enter the unit of the temp (C, F, or K): ");
    scanf(" %c", &unit);

    if (unit == 'C' || unit == 'c') {
  
        float f= (temp * 9/5) + 32;
        float k = temp + 273.15;

        printf("%f C = %f F\n", temp, f);
        printf("%f C = %f K\n", temp, k);
    } else if (unit == 'F' || unit == 'f') {
       
        float c= (temp - 32) * 5/9;
        float k = (temp + 459.67) * 5/9;

        printf("%f F = %f C\n", temp, c);
        printf("%f F = %f K\n", temp, k);
    } else if (unit == 'K' || unit == 'k') {
        
        float c= temp - 273.15;
        float f= (temp * 9/5) - 459.67;

        printf("%f K = %f C\n", temp,c);
        printf("%f K = %f F\n", temp, f);
    } else {
        printf("Invalid unit of temp entered.\n");
    }

    return 0;
}
