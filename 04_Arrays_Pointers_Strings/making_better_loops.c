#include <stdio.h>
int main(){
    int myNumbers[] = {10,20,30,40,50};
    int length =  sizeof(myNumbers)/ sizeof(myNumbers[0]);
    int i;
    for (i=0;i<length;i++){
        printf("%d\n", myNumbers[i]);
    }
}