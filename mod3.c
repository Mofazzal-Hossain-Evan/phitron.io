#include<stdio.h>

int main()
{
    // int i;
// for(i=1;i<=100;i=i+1)
// {
//     printf("%d\n ",i );
    
// }

// int i;
// for(i=1;i<=100;i=i+2)
// {
//     printf("%d\n",i);
// }

// int i;
// for(i=10; i>=1;i=i-1)
// {
//     printf("%d\n", i);
// }

// int i, n, sum=0;
// scanf("%d", &n);
// for(i=1; i<=n; i=i+1) 
// {
//     sum += i;
// }
// printf("%d", sum);

//মডিউল ৩-6: লুপের সাথে কন্ডিশন


// int i;
// for(i=1;i<=100;i+=1)
// {
//     if(i%2==0)
//       {
//         printf("%d -Even\n", i);
//       }
//       else
//       {
//         printf("%d -Odd\n" , i);
//       } 



//  int i,n;
//  for(i=1;i<=10;i=i+1)
//  {
//   if (i==5)
//   {
//     break;
//   }
//   printf("%d\n",i);
      
// }


int i,n;
for(i=1;i<=10;i=i+1)
  {
    if (i==5)
    {
      continue;
    }
    printf("%d\n",i);
  }



return 0;
}