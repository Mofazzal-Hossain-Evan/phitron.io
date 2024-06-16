#include<stdio.h>


int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int a[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Process and print the array elements less than or equal to 10
    for (int i = 0; i < n; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }

    return 0;
}