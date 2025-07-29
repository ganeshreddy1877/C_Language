/* income tax calculation*/
#include<stdio.h>
int main(){
    int income, tax;
    printf("Enter your income: ");
    scanf("%d", &income);
    if (income <= 150000) {
        tax = 0;
        }
        else if (income <= 300000) {
            tax = income * 0.1;
            }
            else if(income<=500000){
                tax=income*0.2;
                }
                else if(income>500000){
                    tax=income*0.3;
                    }
                    else{
                        printf("Invalid income");
                
                    }
                    printf("Your tax is: %d", tax);
                    income =income-tax;
                    printf("Your income after tax is: %d", income);

              return 0;
}
  