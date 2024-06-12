// #include<stdio.h>




// int main() {
//     long long int size, i, sum=0,res;
//     //int arr[100], i, sum=0; 
      
//  int n,arr[n];
// scanf("%d", &n);

    

//    for(i=1; i<=n; i++) 
//     {
//         scanf("%lld", &arr[i]);
//         sum=arr[i]+sum;
        
//     }         
//      printf("%d", sum);

   
//    //  res=sum*-1;
// //printf("%lld", res);
 
// }


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += ar[i];
    }

    if (sum < 0) {
        sum *= -1;
    }

    printf("%lld\n", sum); 

    return 0;
}