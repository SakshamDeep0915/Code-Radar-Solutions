#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1;
    printf("");
    scanf("%d", &num1);
    if (num1 > 0) {
        printf("Positive");
    } else if (num1 < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }
    return 0;
}