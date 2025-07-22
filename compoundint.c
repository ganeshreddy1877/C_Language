/* compound intrest*/
#include<stdio.h>
#include<math.h>
int main(){
    int p,r,t,a,n;
    printf("Enter the principal amount:");
    scanf("%d",&p);
    printf("Enter the rate of interest:");
    scanf("%d",&r);
    printf("Enter the time period:");
    scanf("%d",&t);
    printf("enter the amount");
    scanf("%d",&a);
    printf("enter the no of times interest is compounded per year");
    scanf("%d",&n);
    double ci=(p*pow((1+(r/n)),(n*t)));
    printf("Compound Interest:%f",ci);
    return (0);


}