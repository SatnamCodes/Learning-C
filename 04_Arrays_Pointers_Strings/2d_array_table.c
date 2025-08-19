#include <stdio.h>
int main(){
    int arr1 [3][2] = {{1,2},{1,4},{6,8}};
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}