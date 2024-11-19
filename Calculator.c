#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Displaying the menu
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any whitespace character

    // Getting the numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing the operation based on the input operator
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}
