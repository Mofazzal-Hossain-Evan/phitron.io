#include <stdio.h>
#include <limits.h>

//#define MAX_SIZE 1000

int main() {
    int N;
    int A[10001];
    
    // Read the number of elements
    scanf("%d", &N);
    
    // Read the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Find minimum and maximum
    int min_val = INT_MAX, max_val = INT_MIN;
    int min_index = 0, max_index = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < min_val) {
            min_val = A[i];
            min_index = i;
        }
        if (A[i] > max_val) {
            max_val = A[i];
            max_index = i;
        }
    }

    // Swap minimum and maximum
    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;

    // Print the result
    for (int i = 0; i < N; i++) {
        printf("%d", A[i]);
        if (i < N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}

/*
Certainly! Let's walk through the swapping process step-by-step for the input you provided:
 5 elements, with the values 4, 1, 3, 10, and 8.

1. First, the program reads in these values:
   ```
   N = 5
   A = [4, 1, 3, 10, 8]
   ```

2. Then it finds the minimum and maximum values and their indices:
   ```
   min_val = 1
   min_index = 1
   max_val = 10
   max_index = 3
   ```

3. The swapping happens in these lines:
   
   int temp = A[min_index];
   A[min_index] = A[max_index];
   A[max_index] = temp;


   Let's break this down:
   - `temp = A[min_index]` : temp = A[1] = 1
   - `A[min_index] = A[max_index]` : A[1] = A[3] = 10
   - `A[max_index] = temp` : A[3] = 1

4. After swapping, the array looks like this:
   ```
   A = [4, 10, 3, 1, 8]
   ```

   The minimum value (1) and the maximum value (10) have swapped positions.

5. Finally, the program prints this modified array:
   ```
   4 10 3 1 8
   ```

So, for your input of `5` and `4 1 3 10 8`, the program would output `4 10 3 1 8`.

The swapping effectively moves the smallest number to where the largest number was,
 and vice versa, while keeping all other numbers in their original positions.
/*