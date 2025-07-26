#include <stdio.h>
int main(){
    int x,y,z;
    //List of all the assignment functions.
    x = 5;
    printf("The variable x is assigned the value 5\n");
    printf("The equal to operator, x = 5 : %d\n", x);
    x+=5;
    printf("The assignment operator used is += hence x+=5 gives the result is : %d\n", x);
    x=5;
    x-=5;
    printf("The assignment operator used is -= hence x-=5 gives the result = %d\n", x);
    x=5;
    x*=5;
    printf("The assignent operator used is *= hence x*=5 gives the result = %d\n", x);
    x=5;
    x/=5;
    printf("The assignment operator used is /= hence x/=5 gives the result: %d\n", x);
    x=5;
    x&=4;
    printf("The assignment operator used is &= hence x is provided the value 5 then x&=4 gives the result : %d\n", x);
    x=5;
    x%=3;
    printf("The aassignment operator used is *percent*= hence x*percent*=3 gives the result: %d\n", x);
    x=5;
    x|=4;
    printf("The assignment opertor used is |= hence x=5 , x |=4 is : %d\n" ,x);
    x=5;
    x^=2;
    printf("The assignnment operator used is ^= hence x^=2 gives x^2 hence : %d\n",x);
    x=5;
    x>>=4;
    printf("The assignment operator used is >>= which results the shift of the bits to 2 places to the right i.e if x was given the value 5 then it will display : %d\n", x);
    return 0;    
}