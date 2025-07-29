/*displaying the examination results of the students in the class*/
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float f;
    printf("Enter the marks of five students in five subjects:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5.0;
    printf("The average marks of the five subjects is: %.2f\n",f);
if(f>=75){
    printf("The student is distinction in examination.\n");
}
else if (f>=60 && f<75 ) {
    printf("The student is first class in examination.\n");

}
else if (f>=50 && f<60 ) {
    printf("The student is second class in examination.\n");

}
else if (f>=40 && f<50 ) {
    printf("The student is pass in examination.\n");

}
else {
    printf("The student is fail in examination.\n");
    }
    return 0;
}