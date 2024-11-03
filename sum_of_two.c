#include<stdio.h>

int main() 
{
int n;
scanf("%d",&n);

for(int i=0; i<n-3;i++)

{
for(int j=i+3;j<n;j++)
{
    printf("%d %d\n",i,j);
}
}
}

