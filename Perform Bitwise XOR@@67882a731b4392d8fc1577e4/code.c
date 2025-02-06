#include <stdio.h>

int bitwise_xor(int a, int b) {
    return a ^ b;  // XOR operation
}

int main() {
    int a, b, c;
    printf("");
    scanf("%d %d", &a, &b);
    c = bitwise_xor(a, b);
    printf("%d", c);
    return 0;
}