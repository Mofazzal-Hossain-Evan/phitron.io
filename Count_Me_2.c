#include <stdio.h>
#include <string.h>

int main() {
    char S[1000001]; 
    int consonant= 0;

    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u') {
                consonant++;
            }
        }
    }

    printf("%d\n", consonant);

    return 0;
}