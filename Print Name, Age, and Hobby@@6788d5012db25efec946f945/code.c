#include <stdio.h>

int main() {
    char a[50], c[50];
    int b;
    printf("");
    scanf("%s", &a);
    scanf("%d", &b);
    scanf("%s", &c);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);
    return 0;
}