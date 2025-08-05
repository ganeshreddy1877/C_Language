#include <stdio.h>

int main() {
    int number;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter numbers (-1 to stop):\n");

    while (1) {
        scanf("%d", &number);
        
        if (number == -1) {
            break;
        }

        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeros: %d\n", zeroCount);

    return 0;
}
