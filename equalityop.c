/*equality operators*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,b;
    bool c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    c = (a == b);
    printf("Is %d equal to %d? %d\n",a,b,c);
    c = (a != b);
    printf("Is %d not equal to %d? %d\n",a,b,c);
    printf("where 1 represents true and 0 represents false");
    return(0);
}