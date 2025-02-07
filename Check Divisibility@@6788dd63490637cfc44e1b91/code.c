#include <stdio.h>

int main() {
    int num;
    printf("");
    scanf("%d", &num);
    if (num / 5 & num / 11) {
        printf("Divisible");
    } else if ((num = 0 / 11) & (num = 0 / 5)) {
        printf("Divisible");
    }   
    else {
        printf("Not Divisible");
    }
    return 0;
}