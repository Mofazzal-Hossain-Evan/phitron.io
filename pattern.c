#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d", &n);
    s=n-1;
     k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

       //line space
       s--;
       k=k+2;
       printf("\n");
    }
}

// https://claude.site/artifacts/bd734b41-f9ab-4ddd-9c5a-60080ff79463
// graph TD
//     A[Start] --> B[Declare variables n, s, k]
//     B --> C[Input n]
//     C --> D[Set s = n-1]
//     D --> E[Set k = 5]
//     E --> F[For i = 1 to n]
//     F --> G[For j = 1 to s]
//     G --> H[Print space]
//     H --> I{j <= s?}
//     I -->|Yes| G
//     I -->|No| J[For j = 1 to k]
//     J --> K[Print *]
//     K --> L{j <= k?}
//     L -->|Yes| J
//     L -->|No| M[Decrement s]
//     M --> N[Increment k by 2]
//     N --> O[Print newline]
//     O --> P{i <= n?}
//     P -->|Yes| F
//     P -->|No| Q[End]