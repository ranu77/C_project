#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Notice the space before %c to consume any leftover whitespace

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Modulo by zero is undefined.\n");
            } else {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
