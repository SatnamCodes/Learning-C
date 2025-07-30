#include <stdio.h>
int main() {
    char operator, choice;
    double num1, num2, num3;
    do {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); 
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                num3 = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num3);
                break;
            case '-':
                num3 = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num3);
                break;
            case '*':
                num3 = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num3);
                break;
            case '/':
                if (num2 != 0) {
                    num3 = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num3);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Error! Operator is not correct.\n");
        }
        printf("Do you want to calculate again? (Y/N): ");
        scanf(" %c", &choice); 
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
