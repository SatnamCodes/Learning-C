#include <stdio.h>
int main(){
    int i,j,n,m;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    printf("enter the number of columns: \n");
    scanf("%d",&m);
    int arr[n][m];
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter the element on the position %d%d :",i,j);
            scanf("%d",*(arr+i)+j);
        }

    }
    printf("The required array is : \n");
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            
            printf("%d ",*(*(arr+i)+j));
            
        }
        printf("\n");

}
}