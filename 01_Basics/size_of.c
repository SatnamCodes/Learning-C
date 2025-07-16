#include <stdio.h>

int main() {
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of short: %d bytes\n", sizeof(short));
    printf("Size of long: %d bytes\n", sizeof(long));
    printf("Size of long long: %d bytes\n", sizeof(long long));
    printf("Size of unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("Size of long double: %d bytes\n", sizeof(long double));
    printf("Size of void*: %d bytes\n", sizeof(void*));

    return 0;
}
