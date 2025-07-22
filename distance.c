/*distance travelled travelled by a body*/
#include <stdio.h>
int main(){
    float s,u,t,a;
    printf("Enter the initial velocity of the body in m/s:");
    scanf("%f",&u);
    printf("Enter the time for which the body is moving in seconds:");
    scanf("%f",&t);
    printf("enter  the acceleration of the body in m/s^2:");
    scanf("%f",&a);
    s=u*t+0.5*a*t*t;
    printf("The distance travelled by the body is %.2f m",s);

    return(0);
}