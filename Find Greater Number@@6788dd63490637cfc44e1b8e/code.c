#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("%d", num1);
    } else if (num1 < num2) {
        printf("%d", num2)
    } else {
        printf("Both are equal")
    }
    return 0;
}