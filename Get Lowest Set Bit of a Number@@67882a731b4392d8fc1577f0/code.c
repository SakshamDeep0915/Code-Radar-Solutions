#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (num == 1) {
        printf("0");
        return 1;
    }
    int position = 1;
    while ((num & 1) == 1) {
        num >>= 1;
    }
    printf("%d", position);
    return 0;
}