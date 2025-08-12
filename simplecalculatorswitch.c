#include <stdio.h>

int main() {
    int choice, a, b, c;

    printf("Enter your choice (1 to 5):\n");
    printf("1 for add\n2 for sub\n3 for mul\n4 for div\n5 for mod\n");
    scanf("%d", &choice);  // Added & before choice

    switch(choice) {
        case 1:
            printf("You have chosen addition.\n");
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            c = a + b;
            printf("Result: %d\n", c);
            break;

        case 2:
            printf("You have chosen subtraction.\n");
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            c = a - b;
            printf("Result: %d\n", c);
            break;

        case 3:
            printf("You have chosen multiplication.\n");
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            c = a * b;
            printf("Result: %d\n", c);
            break;

        case 4:
            printf("You have chosen division.\n");
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            if (b == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                c = a / b;
                printf("Result: %d\n", c);
            }
            break;

        case 5:
            printf("You have chosen modulo.\n");
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            if (b == 0) {
                printf("Error: Modulo by zero is undefined.\n");
            } else {
                c = a % b;
                printf("Result: %d\n", c);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
