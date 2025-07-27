#include <stdio.h>
int main(){
    int a;
    double b;

    a = 10;
    b = 3;
    printf("a / b 는 : %f \n", a / b); // 산술변환: int보다 범위가 큰 dobule로 컴파일러가 바꿈
    printf("b / a 는 : %f \n", b / a); 
    return 0;
}
