#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    scanf("%d %d %c", &num1, &num2, &operator);

    if (operator == '+'){
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) 
            result = num1 / num2;
        else
            printf("error");
            return 1;
       } else {
            printf("error");
        }
        printf("%d", result);
        return 0;
    }