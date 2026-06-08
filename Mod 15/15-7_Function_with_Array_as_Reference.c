#include<stdio.h>

void fun(int *arr, int n)
{
    arr[0] = 100;
}

void funCh(char *ar)
{
    ar[0] = 'G';
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    fun(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    char ar[] = "Hello";

    funCh(ar);

    printf("%s\n", ar);

    return 0;
}