#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101  // Maximum length of string + 1 for null terminator

int main() {
    int T;
    char S[MAX_LENGTH];
    int len;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%s", S);
        len = strlen(S);
        
        if (len > 10) {
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        } else {
            printf("%s\n", S);
        }
    }

    return 0;
}