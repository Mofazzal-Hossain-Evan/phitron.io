#include<stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
   printf("Oth index value is %p\n", &arr[0]);
    printf("Oth index value is %p\n", &arr);
    printf("\n");
    printf("First element value is %d\n", arr[0]);
    printf("Second element value is %d\n", arr[1]);
    printf(" %d\n", *arr);

    printf("\n");

    printf("%d\n", *(arr+1));
    printf("%d\n", arr[1]);
    printf("%d\n", *(1+arr));

    printf("\n");
    printf("%d\n", *(arr+2));
    printf("%d\n", arr[2]);
    printf("%d\n", *(2+arr));
    return 0;
}