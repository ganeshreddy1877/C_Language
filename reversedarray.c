/* reversed array*/

#include <stdio.h>
int main() {
    int arr[10], i, n = 6, temp;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Original array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);  // Removed the semicolon after for loop
    printf("\n");
    // Reverse the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
