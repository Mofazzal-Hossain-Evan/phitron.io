#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[1001], t[1001];
    scanf("%s %s", s , t); // Corrected scanf usage
    int lenS = strlen(s);
    int lenT = strlen(t);
    printf("%d %d\n", lenS, lenT); // Corrected Printf to printf
    printf("%s %s\n", s, t);
    return 0; // Added return statement for proper main function ending
}
