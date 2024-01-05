#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result of addition: %.2lf\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result of subtraction: %.2lf\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result of multiplication: %.2lf\n", result);
            break;

        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of division: %.2lf\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}