#include <stdio.h>
int main(){
    int i;
    for(i = 0;i<10;i++)
{
if(i==5){
    continue; // continue is used to skip an iteration and proceed with the next one.
}
printf("%d\n",i);
}

}