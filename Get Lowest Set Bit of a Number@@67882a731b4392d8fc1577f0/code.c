#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (num == 0) {
        return 1;
    }
    int position = 0;
    while ((num & 2) == 0) {
        num >>= 1;
    }
    printf("%d", position);
    return 0;
}