// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
      
//     int n, sum, v;
//     scanf("%d", &n);
//     int arr[n];
//      for(int i = 0; i < n; i++)
//      {
//         scanf("%d", &arr[i]);
     
//      }
        
//             for(int i=0; i<n; i++)
//             { 
//                 if(arr[i] > 0)
//                 {
//                  sum = sum + arr[i];
                 
//                 } else if (arr[i]<0)
//                 {
//                     int v = v + arr[i];
                     
//                 }
//             }
//            printf("%d ",sum);
//            printf("%d ",v);
        
  
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos_sum = 0;
    int neg_sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
           pos_sum = pos_sum + arr[i];
        } else if(arr[i] < 0) {
            neg_sum = neg_sum + arr[i];
        }
    }

    printf("%d ", pos_sum);
    printf("%d ", neg_sum);

    return 0;
}

