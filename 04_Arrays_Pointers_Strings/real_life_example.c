#include <stdio.h>
int main(){
    int ages[]={10,22,20,18,35,23,78,80};
    int i ;
    int length = sizeof(ages)/sizeof(ages[0]);
    int lowestage = ages[0];
    for (i=0;i<length;i++){
        if (lowestage>ages[i]){
            lowestage = ages[1];
            
        }
    }
    printf("%d", lowestage);
}