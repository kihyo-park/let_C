#include <stdio.h>
int main() {
    int num;

    printf("아무 숫자나 입력해 보세요 :");
    scanf("%d", &num);

    if (num == 7) {
        printf("행중의 숫자 7! \n");
    } else {
        printf("그냥 숫자 %d를 입력했군요\n", num);
    }
    return 0;
}
