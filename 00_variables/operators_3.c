/* prifx and postfix*/
#include <stdio.h>
int main(){
    int a  = 1;

    printf("++a : %d \n", ++a);
    /* prefix
    1) add 1 to a
    2) a = 2 */

    a = 1;
    printf("a++: %d \n", a++);
    // postfix
    /* set %d as 1 first, return 1 then add it to 'a'*/
    printf("a : %d \n", a);

    return 0;
}