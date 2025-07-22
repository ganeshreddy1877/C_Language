#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    float d;
    printf("enter the values of a ,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=float(a+b+c)/3;
    printf("the avg of %d,%d and %d is=%f",a,b,c,d);
    return(0);
}