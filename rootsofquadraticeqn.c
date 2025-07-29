/*roots of the quadratic equation*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double x,y;
    printf("Enter the coefficients of the quadratic equation (ax^2+bx+c=0):");
        scanf("%d%d%d",&a,&b,&c);
        x=(-b + sqrt(pow(b,2)-4*a*c))/(2*a);
        y=(-b - sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("x=%ld and y=%lf",x,y);

    return (0);
}