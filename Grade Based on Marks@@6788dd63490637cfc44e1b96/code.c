#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= 90) {
        printf("A");
    } else if (80<=num && num<90) {
        printf("B");
    } else if (70<=num && num<80) {
        printf("C");
    } else if (60<=num && num<70) {
        printf("D");
    } else { 
        printf("F");
    }
    return 0;
}