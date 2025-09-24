#include <stdio.h>

int main() {
    int number;
    int positive_sum = 0, negative_sum = 0;
    int positive_count = 0, negative_count = 0;
    int zero_count = 0;
    
    printf("Enter numbers (enter -1 to stop):\n");
    
    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        
        if (number != -1) {
            if (number > 0) {
                positive_sum += number;
                positive_count++;
            } else if (number < 0) {
                negative_sum += number;
                negative_count++;
            } else {
                zero_count++;
            }
        }
    } while (number != -1);
    
    
    if (positive_count > 0) {
        printf("Positive numbers: %d\n", positive_count);
        printf("Sum of positive numbers: %d\n", positive_sum);
        printf("Mean of positive numbers: %.2f\n", (float)positive_sum / positive_count);
    } else {
        printf("No positive numbers entered.\n");
    }
    
    printf("\n");
    
    
    if (negative_count > 0) {
        printf("Negative numbers: %d\n", negative_count);
        printf("Sum of negative numbers: %d\n", negative_sum);
        printf("Mean of negative numbers: %.2f\n", (float)negative_sum / negative_count);
    } else {
        printf("No negative numbers entered.\n");
    }
    
    printf("\n");
    
    
    printf("Zeros entered: %d\n", zero_count);
    printf("Total numbers entered: %d\n", positive_count + negative_count + zero_count);
    
    return 0;
}