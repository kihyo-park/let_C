#include <stdio.h>

int main() {
    // int type can contain from -2147483648 to 2147483647
    int a = 2147483647;
    printf("a : %d \n", a);

    a++; // notice we are adding! (with postfix)
    printf("a : %d \n", a); // a negative value?!

    return 0;
}