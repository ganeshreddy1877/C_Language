/* read an array elements and print in the reverse order */
#include <stdio.h>
int main(){
    int arr[10], i, n = 10;
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
printf("Array elements in reverse order:\n");
for(i = n - 1; i >= 0; i--)
printf("%d ", arr[i]);
    return 0;
}