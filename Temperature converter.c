#include<stdio.h>

void  main()
{

float C;
printf("Enter temperature in celcius=");
scanf("%f",&C);
printf("\n Farenahit value=%f",((9*C)+160)/5);
printf("\n Kelvin value=%f",C+273);
    

float F;
printf("\n Enter temperature in  farenahit=");
scanf("%f",&F);
printf("\n celcius value=%f",((5*F)-160)/9);
printf("\n Kelvin value=%f", ((5*F)+2297)/9);


float K;
printf("\n Enter temperature in Kelvin=");
scanf("%f",&K);
printf("\n Celcius value=%f",K-273);
printf("\n Farenahit value=%f",((9*K)-2297)/5);
}