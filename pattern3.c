#include<stdio.h>
int main()
{
    int n,k=1;
    scanf("%d", &n);
    //s=n-1;
    //k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }

    
}