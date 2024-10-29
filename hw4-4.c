#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Test Case 1\nInput:\n");

    printf("x? ");
    scanf("%d", &x);
    printf("y? ");
    scanf("%d", &y);

    printf("Output:\n");
    if (x > y) {
        printf("%d\n", x);
    } else {
        printf("%d\n", y);
    }

    return 0;
}
