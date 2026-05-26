#include<stdio.h>

void fun( int *ptr)
{

    printf("Address of ptr is: %p\n", ptr); // Print the address stored in ptr
    printf("Value of x is: %d\n", *ptr); // Accessing the value using pointer

    *ptr = 200; // Modifying the value of x through the pointer
    printf("Value of x after modification is: %d\n", *ptr); // Print
    printf("Address of ptr is still: %p\n", ptr); // Print the address stored in ptr again
}

int main()
{
    int x = 100;
    printf("Address of x is: %p\n", &x); // Print the address of x
    fun(&x); // Call by reference
    
    return 0;
}