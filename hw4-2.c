#include <stdio.h>

int main(void)
{
    int x;
    printf("Test Case 1\nInput:\n");
    scanf("%d", &x);
    
    printf("Output:\n");
    if (x > 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative or zero\n");
    }
    
    return 0;
}
