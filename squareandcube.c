#include <stdio.h>

int main() {
    int n, sq, cu;
    
    printf("Enter the range of natural numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sq = i * i;
        cu = i * i * i;
        printf("The square of the number %d is %d\n", i, sq);
        printf("The cube of the number %d is %d\n", i, cu);
    }

    return 0;
}
