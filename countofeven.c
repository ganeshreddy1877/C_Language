/*count of even numbers from 1 to n with looping*/
#include<stdio.h>
int main(){
    int i, count = 0,n;
    printf("enter the range input");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            count++;
            }
            }
        printf("%d", count);
        
    return(0);
}