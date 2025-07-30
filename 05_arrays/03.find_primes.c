#include <stdio.h>
int main() {
    int guess = 5; // 소수의 배열
    int prime[1000]; // 1000개까지만 소수 찾기
    int index = 1;
    int i;
    int ok; // 처음 두 소수 (1, 2)는 특별한 경우
    prime[0] = 2;
    prime[1] = 3;
    for (;;) {
        ok = 0;
        for (i = 0; i <= index; i++) {
            if (guess % prime[i] != 0) {
                ok++;
            } else {
                break;
            }
        }
        if (ok == (index + 1)) {
            index++;
            prime[index] = guess;
            printf("소수: %d \n", prime[index]);
            if (index == 999) break;
        }
        guess += 2;
    }
    return 0;
}
