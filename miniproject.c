#include <stdio.h>

int main() {
    int i;
    int forCount = 0, whileCount = 0;

    /* Using for loop */
    printf("Using for loop:\n");
    for(i = 1; i <= 5; i++) {
        printf("%d ", i);
        forCount++;   // counting iterations
    }

    printf("\nFor loop iterations: %d\n\n", forCount);

    /* Using while loop */
    i = 1;  // reset value
    printf("Using while loop:\n");
    while(i <= 5) {
        printf("%d ", i);
        whileCount++;  // counting iterations
        i++;
    }

    printf("\nWhile loop iterations: %d\n", whileCount);

    return 0;
}