#include <stdio.h>
int main() {
    int input;

    printf("마이펫 \n");
    printf("무엇을 하실 건지 입력하세요 \n");
    printf("1. 밥주기 \n");
    printf("2. 씻기기 \n");
    printf("3. 재우기 \n");

    scanf("%d", &input);

    switch (input) {
        case 1: // if..
            printf("맛있어 \n");
            break;
        
        case 2: // else if..
            printf("시원해 \n");
            break;

        case 3: // else if..
            printf("zzz \n");
            break;
        
        default: // =else
            printf("? 나니? \n");
            break;
    }

    return 0;
}
