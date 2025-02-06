#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d", &a);
    int msb_mask = 1 << 31;
    if (a & msb_mask) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}