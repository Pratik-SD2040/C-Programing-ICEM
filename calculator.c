#include <stdio.h>
#include <conio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("=== Simple Calculator ===\n");
    printf("Enter expression (example: 5 + 3): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 == 0)
                printf("Error: Division by zero!\n");
            else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;

        case '%':
            printf("Error: Modulus not supported for decimal numbers.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    getch();
    return 0;
}
