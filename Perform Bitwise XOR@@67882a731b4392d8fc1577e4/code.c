#include <stdio.h>

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d", &a, &b);
    c = bitwise_xor(a, b);
    printf("%d", c);
    return 0;
}