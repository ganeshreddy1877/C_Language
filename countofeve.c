#include<stdio.h>
int main(){
int a=2,d=2,n,sum;
printf("enter the range of the input");
scanf("%d",&n);
sum=n*(2*a+(n-1)*d)/2;
printf("no of evens present in the range %d  are %d",n,sum);
return(0);

}