#include <stdio.h>

int main() {
    int sale, purchase;

    scanf("%d %d", &sale, &purchase);

    if (purchase > sale) {
        printf("Profit");
    } else if (sale > purchase) {
        printf("Loss");
    } else {
        printf("No Profit No Loss");
    }
}