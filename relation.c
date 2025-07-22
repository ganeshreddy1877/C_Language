/* relational operators*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a , b;
    bool c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c = (a > b);
    printf("Is %d greater than %d? %d\n",a,b,c);
    c= (a<b);
    printf("Is %d less than %d? %d\n",a,b,c);
    c = (a >= b);
    printf("Is %d greater than or equal to %d? %d\n",a,b,c);
    c = (a <= b);
    printf("Is %d less than or equal to %d? %d\n",a,b,c);
    printf("where 1 represents true and 0 represents false");
    return(0);
}