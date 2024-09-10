#include <stdio.h>
#include <string.h>



int main() {
    char S[100001 + 1]; 
    int count[26] = {0};  
    
  
    scanf("%s", S);
    
    
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            count[S[i] - 'a']++;
        }
    }
    
    
    for (int i = 0; i <= 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }
    
    return 0;
}