#include <stdio.h>
int main() {
  float a = 3.141592f;
  double b = 3.141592;
  int c = 123;
  printf("a : %.2f \n", a); // 소수 2번째자리까지 표현
  printf("c : %5d \n", c); // 다섯 자리에서 맞춰서 표현
  printf("b : %6.3f \n", b); // 위에 두 개 합쳐서 표현
  return 0;
}