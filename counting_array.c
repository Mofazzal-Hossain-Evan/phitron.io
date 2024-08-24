// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int zero=0, one=0;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]==0)
//         {
//             zero++;
//         }
//         if(a[i]==1)
//         {
//             one++;
//         }
//     }
    
//     printf("0 - %d \n",zero);
//     printf("1 - %d \n",one);
    
//     }      

#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[101]={0};
    for(int i=0; i<n; i++)
    {
       int val=a[i];
       cnt[val]++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    
   
    
    }      

