#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n;
    scanf("%d", &n);
    int arr[n];
     for(int i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
     }
     
    for(int i =n-1; i >= 0; i--)
     {

      if(i%2==1){
        printf("%d ", arr[i]);
        }
     }
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
