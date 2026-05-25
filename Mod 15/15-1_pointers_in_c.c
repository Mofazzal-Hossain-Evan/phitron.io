#include<stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;
    *ptr = 300;
    printf("x er address - %p\n", &x);
    printf("ptr er address - %p\n", ptr);
    printf("ptr er address - %p\n", &ptr);
      printf("ptr er memory address - %d\n", sizeof(ptr));

    return 0;
}