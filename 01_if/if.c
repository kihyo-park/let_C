#include <stdio.h>
int main() {
  int a;
  printf("아무 숫자나 입력하세요 : ");
  scanf("%d", &a);

  if (a >= 10 && a < 20) {
    printf(" %d 는 10 이상, 20 미만인 수 입니다. \n", a);
  } else if (a == 25 || a == 30) {
    printf("25 또는 30이라는 a에 선언하셨군요. \n");
  }

  return 0;
}