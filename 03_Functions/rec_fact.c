
#include <stdio.h>
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n + sum(n-1));
    }
}
int main (){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if (num<0){
        printf("Kindly enter a positive number.\n");

    }
    else {
        printf("The sum of the n natural number is : %d", sum(num));
    }


}

