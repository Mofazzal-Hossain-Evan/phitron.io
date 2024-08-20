#include <stdio.h>
#include <string.h>

int main() {
    char A[11], B[11];  // Directly declare arrays of size 11
    
    scanf("%s %s", A, B);  // Read both strings in one line
    
    printf("%lu %lu\n", strlen(A), strlen(B));  // Print lengths
    printf("%s%s\n", A, B);  // Print concatenation
    
    // Swap first characters and print
    printf("%c%s %c%s\n", B[0], A + 1, A[0], B + 1);
    
    return 0;
}

/*
%c%s %c%s\n: This is the format string. It tells printf to print:

A character (%c)
Followed by a string (%s)
Then a space
Another character (%c)
Another string (%s)
And finally a newline (\n)


B[0]: This is the first character of string B.
A + 1: This is a pointer to the second character of string A.
 In C, a string name acts as a pointer to its first character, so A + 1 points to the second character. 
 When used with %s, it prints the string starting from this point (i.e., all of A except its first character).
A[0]: This is the first character of string A.
B + 1: Similar to A + 1, this points to the second character of string B and prints all of B except its first character.










easy one

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 11  // Maximum length of string + 1 for null terminator

int main() {
    char A[MAX_LENGTH], B[MAX_LENGTH];
    
    // Read the input strings
    scanf("%s", A);
    scanf("%s", B);
    
    int lenA = strlen(A);
    int lenB = strlen(B);
    
    // Print the sizes of A and B
    printf("%d %d\n", lenA, lenB);
    
    // Print the concatenation of A and B
    printf("%s%s\n", A, B);
    
    // Swap the first characters and print
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);
    
    return 0;
}



*/