#include <stdio.h>

void fun(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void fun_two(double arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    double arr2[5] = {10.6, 20.0, 30.0, 40.0, 50.0};

    fun(arr1, 5);
    fun_two(arr2, 5);

    return 0;
}