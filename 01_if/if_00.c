#include <stdio.h>
int main() {
    double i, j;
    printf("Type two integers you want to divde:");
    scanf("%lf %lf", &i, &j);

    printf("%f divided by %f is %f \n", i, j, i /j);

    return 0;
}