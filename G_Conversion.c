#include <stdio.h>
#include <string.h>
//#include <ctype.h>

#define MAX_LENGTH 100001  // Maximum length of string + 1 for null terminator

int main() {
    char S[MAX_LENGTH];
    
    // Read the input string
    scanf("%s", S);
    
    int len = strlen(S);
    
    // Process the string
    for (int i = 0; i < len; i++) {
        if (S[i] == ',') {
            S[i] = ' ';  // Replace comma with space
        } else if (islower(S[i])) {
            S[i] = toupper(S[i]);  // Convert lowercase to uppercase
        } else if (isupper(S[i])) {
            S[i] = tolower(S[i]);  // Convert uppercase to lowercase
        }
        // Other characters remain unchanged
    }
    
    // Print the modified string
    printf("%s\n", S);
    
    return 0;
}