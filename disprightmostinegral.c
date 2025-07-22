#include <stdio.h>

int main() {
    float num;
    int integralPart, rightmostDigit;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    integralPart = (int)num;  // Extract integral part by casting to int
    rightmostDigit = integralPart % 10;  // Get rightmost digit

    printf("Rightmost digit of the integral part: %d\n", rightmostDigit);

    return 0;
}
