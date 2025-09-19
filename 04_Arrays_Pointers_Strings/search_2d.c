

#include <stdio.h>
int locate_in_infinite_rows_matrix(int m, int target, int *outRow, int *outCol) {
    if (m <= 0 || target <= 0) return 0;

    // Convert target (1-based index in the flattened sequence) to 0-based for math
    int idx0 = target - 1;
    int row0 = idx0 / m;      // 0-based row
    int col0 = idx0 % m;      // 0-based column

    // Convert back to 1-based for output
    if (outRow) *outRow = row0 + 1;
    if (outCol) *outCol = col0 + 1;
    return 1;
}

int main(void) {
    int m, target;
    printf("Enter number of columns (m): ");
    if (scanf("%d", &m) != 1) {
        printf("Invalid input for columns.\n");
        return 1;
    }
    printf("Enter target (natural number): ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input for target.\n");
        return 1;
    }

    int row, col;
    if (locate_in_infinite_rows_matrix(m, target, &row, &col)) {
        printf("Found %d at row %d, column %d\n", target, row, col);
        return 0;
    } else {
        printf("Inputs invalid (m > 0 and target > 0 required).\n");
        return 1;
    }
}