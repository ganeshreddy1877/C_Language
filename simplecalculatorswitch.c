/* simple calculator using swithc operator */
#include <stdio.h>
int main(){
    int choice;
    printf("enter the inputr values till 1 to 5");
    printf("1 for add /n 2 for sub /n 3 for mul /n 4 for div /n 5 for mod");
    scanf("%d",choice);
    switch(choice)
    {
        case 1:
        printf("You have chosen 1");
        int a,b,c;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("Enter the second number:");
        scanf("%d",&b);
        c=a+b;
        break;
        case 2:
        printf("You have chosen 2");
        int a,b,c;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("netr the second number:");
        scanf("%d",&b);
        c=a-b;
        break;
        case 3:
        printf("You have chosen 3");
        int a,b,c;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("enter second number");
        scanf("%d",&b);
        c=a*b;
        break;
        case 4:
        printf("You have chosen 4");
        int a,b,c;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("enter second number");
        scanf("%d",&b);
        break;
        case 5:
        int a,b,c;
        printf("Enter the first number:");
        scanf("%d",&a);
        printf("enter second number");
        scanf("%d",&b);
        printf("You have chosen 5");
        break;
        default:
        printf("Invalid choice");
    }return (0);}