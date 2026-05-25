#include<stdio.h>

int main()
{
    
    double x= 5.5;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr = 22.33;

    printf("Value of x: %lf\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value at address stored in ptr: %lf\n", *ptr);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value at address stored in ptr2: %lf\n", *ptr2);
    printf("Address stored in ptr2: %p\n", ptr2);
    return 0;
}