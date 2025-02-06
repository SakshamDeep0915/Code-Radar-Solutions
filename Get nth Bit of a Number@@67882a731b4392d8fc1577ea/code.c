#include <stdio.h>

int get_nth_bit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n, bit;

    scanf("%d", &num);

    scanf("%d", &n);

    if (n < 0 || n > 31) {
        return 1;
    } 
    bit = (num >> n);
    printf("%d", bit);

    return 0;
}
