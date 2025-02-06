#include <stdio.h>

int count_leading_zeros(int num){
    int count = 0;
    while (num) {
        num <<= 1;
        count ++;
    }
    return 32-count;
}
int main() {
    int num;
    printf("");
    scanf("%d", &num);
    int leading_zeros = count_leading_zeros(num);
    printf("%d", leading_zeros);
    return 0;
}