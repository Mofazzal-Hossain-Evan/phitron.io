#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int a[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Process and print the modified array
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("2 ");
        } else if (a[i] > 0) {
            printf("1 ");
        } else {
            printf("0 ");
        }
    }

    printf("\n");

    return 0;
}
