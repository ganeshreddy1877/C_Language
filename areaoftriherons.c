/*area of a triangle using herons formula*/
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter the sides of the triangle:\n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %.2f",area);
    return(0);
}