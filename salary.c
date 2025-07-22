#include <stdio.h>

int main() {
    float basicPay, hra, ta, salary;

    printf("Enter the basic pay: ");
    scanf("%f", &basicPay);

    hra = 0.10 * basicPay;
    ta = 0.05 * basicPay;
    salary = basicPay + hra + ta;

    printf("HRA (10%% of basic pay): %.2f\n", hra);
    printf("TA (5%% of basic pay): %.2f\n", ta);
    printf("Total Salary: %.2f\n", salary);

    return (0);
}
