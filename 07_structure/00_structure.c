#include <stdio.h>
int slave(int master_money) {
    master_money += 10000;
    return master_money;
}

int main() {
    int my_money = 100000;
    printf("%d", slave(my_money));

    return 0;
}