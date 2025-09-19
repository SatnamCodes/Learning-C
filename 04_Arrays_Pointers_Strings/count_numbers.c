#include <stdio.h>

int main() {
    int number;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    printf("Enter numbers (enter -1 to stop):\n");
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        
        if (number == -1) {
            break;
        }
        
       
        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    
    
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeros: %d\n", zero_count);
    printf("Total numbers entered: %d\n", positive_count + negative_count + zero_count);
    
    return 0;
}