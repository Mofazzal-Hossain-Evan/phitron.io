#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int mn = INT_MAX, pos;
    for (int i = 0; i < n; i++) {
        if (arr[i] < mn) {
            mn = arr[i];
            pos = i + 1;
        }
    }

    printf("%d %d\n",mn,pos);
   // printf("Position: %d\n", );

    return 0;
}

    

