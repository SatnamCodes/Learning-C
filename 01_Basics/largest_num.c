#include <stdio.h>
int main (){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf("num1 is greater than num 2");
    
    else if (num1 == num2)
        printf("Num1 is equal to num2");
    
    else {
        printf("num2 is greater than num1");
    
     return 0;
    }
}


