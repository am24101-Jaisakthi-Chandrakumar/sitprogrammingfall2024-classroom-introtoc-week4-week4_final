#include <stdio.h>

int main(void)
{
    double height, weight, ideal;
    
    printf("Test Case 1\nInput:\n");
    
    printf("Height? ");
    scanf("%lf", &height);
    printf("Weight? ");
    scanf("%lf", &weight);
    
    ideal = height * height * 22 / 10000; // Corrected calculation
    printf("Output:\nIdeal weight = %.6lf\n", ideal); // Formatted output
    
    if (weight >= ideal + 5)
    {
        printf("Let's reduce sweets\n");
    }
    else if (weight <= ideal - 5)
    {
        printf("Eat some more\n");
    }
    else
    {
        printf("Go for it\n");
    }   
    
    return 0;
}
