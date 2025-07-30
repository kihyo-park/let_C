#include <stdio.h>
int main() {
    int score[3][2];
    int i, j;

    for (i = 0; i < 3; j++) // 총 3명의 학생의 데이터를 받는다
    {
        for (j = 0; j < 2; j++) {
            if (j == 0){
                printf("%d 번째 학생의 국어 점수 : ", i + 1);
                scanf("%d", &score[i][j]);
            }
        }
    }
}