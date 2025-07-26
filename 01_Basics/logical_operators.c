#include <stdio.h>
int main(){
    //Logical Operators.
    int x=9,y=4;
    printf("The logical operator && is equivalent to the logical AND hence checks if condition 1 AND condition are true and returns 1 and 0 accordingly.\n");
    printf("To check if both the numbers are less than 10 we use x<10 && y<10 that returns: %d\n", x<10 && y<10);
    printf("To check if both of the nunber are less than 5 i.e if x<5 && y<5 , this returns : %d\n", x<5 && y<5);
    printf("The logical operator || is the equivalent to the logical OR and hence checks if any one of the given values is true.\n");
    printf("To check if any one of the nunbers are less than 5 i.e if x<5 || y<5 , this returns : %d\n", x<5 || y<5);
    printf("The ! is used as the equivalent of the logical NOT hence returns 1 if the given condition is not true.\n");
    printf("To check if any one of the nunbers are less than 5 i.e if x<5 && y<5 , this returns : %d\n", !(x<5 || y<5));
    return 0;
}