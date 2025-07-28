
#include <stdio.h>
int main() {
    int N, i, j;

    printf("몇 줄 짜리 삼각형을 생성하시겠습니까?");
    scanf("%d",  &N);

    for (i = 0; i < N; i++) {
        for (j = 1; j < (N-1); j++) {
            printf("b");
        }
        for (j = 1; j < (i+1)*2; j++) {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}