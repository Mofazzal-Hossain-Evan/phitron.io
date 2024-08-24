// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[200],b[100];
//     scanf("%s %s",a,b);
//     int k=strlen(a);
//     for(int i=0;i<=strlen(b);i++)
//     {
//         a[k]=b[i];
//         k++;        
//     }
//     printf("%s %s",a,b);
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[200],b[100];
//     scanf("%s %s",a,b);
//    strcat(a,b);
//     printf("%s %s",a,b);
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int k=strlen(a);
    for(int i=0;i<=2;i++)
    {
        a[k]=b[i];
        k++;  
            
    }
    //a[8]='\0';
    a[k]='\0';
    printf("%d\n",k);
    printf("%s %s",a,b);
     
}