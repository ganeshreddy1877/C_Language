/* addition of elements in an array */
#include <stdio.h>
int main() {
    int a[10], n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {   // Change here: i < n instead of i <= n
        sum = sum + a[i];
    }
    printf("Sum of array elements is: %d\n", sum);
    return 0;
}
