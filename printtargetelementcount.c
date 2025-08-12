/* print the target element array*/
#include <stdio.h>

int main() {
    int a[10], n, target, i, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter target element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            printf("The target is found at position %d\n", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("The target element %d is not found in the array.\n", target);
    } else {
        printf("The element %d is found %d times in the array.\n", target, count);
    }

    return 0;
}
