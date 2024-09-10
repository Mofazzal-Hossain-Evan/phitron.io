#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 21  // 20 characters + 1 for null terminator

int main() {
    char X[MAX_LENGTH], Y[MAX_LENGTH];
    
    
    scanf("%s %s", X, Y);
    
    
    if (strlen(X) >= 1 && strlen(X) <= 20 && strlen(Y) >= 1 && strlen(Y) <= 20) {
       
        if (strcmp(X, Y) <= 0) {
            printf("%s\n", X);
        } else {
            printf("%s\n", Y);
        }
    } else {
        printf("Input strings.\n");
    }
    
    return 0;
}