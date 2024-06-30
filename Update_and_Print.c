// #include <stdio.h>


// int main() {
//     int N, X, V;
//     int A[100000];

   
//     scanf("%d", &N);

    
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }

  
//     scanf("%d %d", &X, &V);


//     A[X] = V;

//     for (int i = N - 1; i >= 0; i--) {
//         printf("%d ", A[i]);
//     }
//    // printf("\n");

//     return 0;
// }

#include<stdio.h>
int main(){
    int i,n=0,x=0,v=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);

    } 
    scanf("%d %d",&x,&v);
    for(i=n-1;i>=0;i--)
    {
        if(x==i)
        {
            a[i]=v;
        }
        printf("%d ",a[i]);
    }

    return 0;
}