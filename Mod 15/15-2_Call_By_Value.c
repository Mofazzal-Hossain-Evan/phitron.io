#include<stdio.h>

// void fun(int x)
// {
//     printf("fun x address =%p\n",&x);
// }
// int main()
// {
//     int x =10;
//     printf("main x address =%p\n",&x);
//     fun(x);
//     return 0;
// }


void fun(int x)
{
    printf("fun x address =%p\n",&x);
    x=209;
    printf("fun x =%d\n",x);
    printf("fun x address =%p\n",&x);
    printf("\n");
}
int main()
{
    int x =10;
    printf("\n");
    printf("main x address =%p\n",&x);
    fun(x);
    printf("main x =%d\n",x);
    return 0;
}