#include <stdio.h>

void sortArray(int arr[], int size) {
    int temp;
    for (int i=0; i<size-1; i++) {
        for (int j=1+1; j<size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", arr[i]);
    }

    sortArray(arr, n);

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}