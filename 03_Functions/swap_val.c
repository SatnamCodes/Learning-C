
#include <stdio.h>
void swap(int n, int m){
    int temp;
    temp =m;
    m=n;
    n=temp;
}
int main (){
    int x , y,result;
    printf("Enter the first number : \n");
    scanf("%d", &x);
    printf("Enter the second number : \n");
    scanf("%d", &y);
    printf("The numbers before swapping are %d and %d. ", x,y);
    swap(x,y);
    printf("The numbers after swapping are %d and %d. ", x, y);
    



}


