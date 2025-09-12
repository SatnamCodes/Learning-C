#include <stdio.h>
void rec_level(int n){
    if (n==6) return;
    printf("\n The recursion level is %d", n);
    rec_level(n+1);   
}
int main(){
    rec_level(1);
    return 0;
}