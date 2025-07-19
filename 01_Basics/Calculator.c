#include <stdio.h>
int main(){
    char operator;
    double num1 , num2, num3;
    printf("Enter an operator (+, -, * ,  /): ");
    scanf ("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch(operator){
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
            if(num2 != 0){
                num3 = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num3);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }
}