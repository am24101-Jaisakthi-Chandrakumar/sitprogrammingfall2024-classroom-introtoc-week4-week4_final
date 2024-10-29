#include <stdio.h>
#include <math.h>

int main(void)
{
    double p, q, h;
    printf("Test Case 1\nInput:\n");
    
    printf("p? ");
    scanf("%lf", &p);
    
    q = 1 - p;
    h = -p * (log(p) / log(2)) - q * (log(q) / log(2));
    
    printf("Output:\n%.6lf\n", h);
    
    return 0;
}
