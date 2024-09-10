// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// #define MAX_LENGTH 10000

// void count_characters(const char* S, int* capital, int* small, int* digit) {
//     *capital = 0;
//     *small = 0;
//     *digit = 0;
    
//     for (int i = 0; S[i] != '\0'; i++) {
//         if (isupper(S[i])) {
//             (*capital)++;
//         } else if (islower(S[i])) {
//             (*small)++;
//         } else if (isdigit(S[i])) {
//             (*digit)++;
//         }
//     }
// }

// int main() {
//     int T;
//     char S[MAX_LENGTH + 1];  // +1 for null terminator
    
//     scanf("%d", &T);
    
//     // Consume the newline character after T
//     getchar();
    
//     for (int i = 0; i < T; i++) {
//         fgets(S, sizeof(S), stdin);
        
//         // Remove trailing newline if present
//         size_t len = strlen(S);
//         if (len > 0 && S[len-1] == '\n') {
//             S[len-1] = '\0';
//         }
        
//         int capital, small, digit;
//         count_characters(S, &capital, &small, &digit);
        
//         printf("%d %d %d\n", capital, small, digit);
//     }
    
//     return 0;
// }

did not understoos