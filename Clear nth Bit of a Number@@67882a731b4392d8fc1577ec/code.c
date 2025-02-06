#include <stdio.h>

int main() {
    int num, n, result;
    scanf("%d", &num);
    scanf("%d", &n);
    if (n < 0 || n > 31) {
        return 1;
    }
    result = num & ~(1 << n);
    printf("%d", result);

    return 0;
}