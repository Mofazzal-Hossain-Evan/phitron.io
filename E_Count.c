#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char a[1000001];
   scanf("%s",a);
   int sum=sum+0;
   for(int i=0; i<strlen(a);i++)
   {
    sum = sum+a[i]-'0';
    //printf("%d\n", a[i]);
   } 
   printf("%d",sum);
}