#include <stdio.h>
int main(){
int digits[] = {};
int n,i,digitsSize;
printf("enter the number of elements in the array: \n");
scanf("%d",&n);
for (i=0;i<n;i++){
    printf("Enter the %dth element in the array: \n", i);
    scanf("%d", &digits[i]);
}
digitsSize = sizeof(digits)/ sizeof(digits[0]);
digits[digitsSize-1] = digits[digitsSize-1] + 1;
for(int i=0;i<digitsSize;i++)
printf("%d",digits[i]);
}

// This is a sample C code for the problem and below is the solution to the problem:
