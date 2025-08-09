#include <stdio.h>
int main(){
    int i,sum = 0 , inp[5];
    printf("Enter the array: \n");
    for (i=0 ; i<5 ; i++){
        printf("Element %d: ", i);
        scanf("%d", &inp[i]);
        
    }
    for (i=0;i<5;i++){
    printf(" %d\n ", inp[i]);

}
for (i=0;i<5;i++){
    sum += inp[i];
    
}
printf("%d\n" , sum);
}