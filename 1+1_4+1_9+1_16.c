
#include <math.h>
#include <stdio.h>

float S(int n)
{
    int i;
    float s = 0.0;
    for (i = 1; i <= n; ++i) {
        s+= 1 / pow(i, 2);

    }
    return s;
}
   

int main()
{
    int n ;
    float res ;
    printf("Enter a limit\n");
    scanf("%d",&n);
    res=S(n);
    printf("%f", res);

}