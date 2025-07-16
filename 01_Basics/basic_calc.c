#include <stdio.h>
int main(){
    int num1 , num2 , num3, sum, product, difference, div;
    char operator;
    printf("Enter the two numbers :");
    scanf("%d %d" , &num1 , &num2);
    sum= num1+num2;
    product = num1*num2;
    difference = num1 - num2;
    div = num1 / num2;


    printf("The sum of the two numbers is : %d\n", sum);
    printf("The product of the two numbers is : %d\n", product);
    printf("The result of division of the two numbers is : %d\n", div);
    printf("The difference of the two numbers is : %d\n", difference);
}