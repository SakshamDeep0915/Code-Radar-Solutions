#include <stdio.h>

struct student {
    int roll;
    char name[100];
    float marks;
};
int main() {
    int n;
    scanf("%d", &n);
    struct student s[n];

    for (int i=0;i<n;i++) {
        scanf("%d %[^\n] %f", &s[i].roll, &s[i].name, &s[i].marks);
    }
    for (int i=0;i<n;i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f", &s[i].roll, &s[i].name, &s[i].marks);
    }
}