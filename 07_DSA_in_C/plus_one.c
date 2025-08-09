#include <stdio.h>
int main(){
int digits[] = {1,2,3};
int digitsSize = sizeof(digits)/ sizeof(digits[0]);
digits[digitsSize-1] = digits[digitsSize-1] + 1;
for(int i=0;i<digitsSize;i++)
printf("%d",digits[i]);
}

