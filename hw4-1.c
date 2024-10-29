#include <stdio.h>

int main(void)
{
    int x, y, z, a;
    
    printf("Test Case 1\nInput:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    a = (x + y + z) / 3;
    printf("Output:\nAverage is %d\n", a);

    return 0;
}
