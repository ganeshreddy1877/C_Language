/* program to read array elements and print the array elements*/
#include<stdio.h>
int main()
{
    int a[10], i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("ARRAY OF ELEMENTS :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        }
        return 0;
    }