#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    printf("enter teh value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    h=a^b;
    printf("sum of %d and %d is %d\n",a,b,c);
    printf("difference of %d and %d is %d\n",a,b,d);
    printf("product of %d and %d is %d\n",a,b,e);
    printf("division of %d and %d is %d\n",a,b,f);
    printf("modulus of %d and %d is %d\n",a,b,g);
    printf("%d to the power of %d is %d\n",a,b,h);
    return(0);
}