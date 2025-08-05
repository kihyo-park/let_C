/* constant poitners*/
int main() {
    int a;
    int b;
    const int* pa = &a;

    *pa = 3; // wrong
    pa = &b;
    return 0;
}
