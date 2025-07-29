/* salsry bonus 5% bonus for male and 15% bonus for female*/
#include<stdio.h>
int main(){
    int gender, salary, bonus,extrab;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    printf("Enter your gender (1 for male, 2 for female): ");
    scanf("%d", &gender);
    if (gender == 1) {
        bonus = salary * 0.05;
        }
        else if (gender == 2) {
            bonus = salary * 0.15;
            }
            else {
                printf("Invalid gender");
            }
            if (salary<=9999){
                extrab = salary * 0.2;

            }
            printf("Your bonus is: %d", bonus);
            printf("Your total salary is: %d", salary + bonus+extrab);

    return 0;
}