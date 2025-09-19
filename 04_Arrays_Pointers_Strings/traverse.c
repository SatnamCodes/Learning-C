#include <stdio.h>
#include <ctype.h>

int main() {
    int n, m, i, j;
    char dir;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter starting direction (R=right, D=down, L=left, U=up): ");
    scanf(" %c", &dir);
    dir = toupper(dir);

    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    printf("Transversal starting %c:\n", dir);

    
    int d;
    switch (dir) {
        case 'R': d = 0; break;
        case 'D': d = 1; break;
        case 'L': d = 2; break;
        case 'U': d = 3; break;
        default: d = 0; break;
    }

    while (top <= bottom && left <= right) {
        if (d == 0) { 
            for (j = left; j <= right; j++)
                printf("%d ", arr[top][j]);
            top++;
        } else if (d == 1) { 
            for (i = top; i <= bottom; i++)
                printf("%d ", arr[i][right]);
            right--;
        } else if (d == 2) { 
            for (j = right; j >= left; j--)
                printf("%d ", arr[bottom][j]);
            bottom--;
        } else if (d == 3) { 
            for (i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
        d = (d + 1) % 4; 
    }
    printf("\n");
    return 0;
}