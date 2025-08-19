#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of units consumed: ");
    scanf("%d",&n);
    if(n>=0 &&n==150){
        n=n*3
    }
    else if (n>150 && n<=350) {
    n=100+(n*3.75);
    }
    else if(n>350 && n<=450){
        n=250+(n*4);
    }
    else if(n>450 && n<=600){
        n=300+(n*4.25);
    }
    else if(n>600){
        n=400+(n*5);
    }
    printf("The bill issued is: %d",n);
    return(0);

}
