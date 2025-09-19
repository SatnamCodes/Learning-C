#include <stdio.h>
#include <limits.h>

int main(void){
    int n;
    printf("Enter the number of elements in an array: \n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find largest
    int max1 = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max1) max1 = arr[i];
    }

    // Find second largest distinct (< max1)
    int hasSecond = 0;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] < max1) {
            if (!hasSecond || arr[i] > max2) {
                max2 = arr[i];
                hasSecond = 1;
            }
        }
    }

    printf("Largest element: %d\n", max1);
    if (hasSecond) {
        printf("Second largest element: %d\n", max2);
    } else {
        printf("Second largest element does not exist (no distinct value).\n");
    }
    return 0;
}