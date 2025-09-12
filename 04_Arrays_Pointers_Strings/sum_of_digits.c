#include <stdio.h>
int main(){
    int n, sum = 0, digit;
    printf("Enter your number: ");
    scanf("%d", &n);
    while(n != 0){ //keep doing this while the value of n is not zero
        digit = n % 10; //the digit is the remainder left after dviding the number by 10.
        sum += digit; //sum ==sum + digit that is extracted
        n /= 10; //remove the last digit by dividing the number by 10 as the value is given in int so there will be no digit in the decimal places.
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}