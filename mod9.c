#include <stdio.h>

int main() 
{


    int n;
    scanf("%d", &n);
    int ar[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for(int i=n; i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }

    ar[pos]= val;

        for(int i=0; i<=n;i++)
    {
       printf("%d ",ar[i]);
    }


    return 0;
}

/*
This code is performing an array insertion operation and then printing the result. 
Here's what each part does:

The first loop: for(int i=n; i>=pos+1; i--)

This loop starts from the end of the array (n) and moves backwards.
It shifts elements to the right, making space for the new element.
Each element from pos+1 to the end is moved one position to the right.


ar[pos] = val;

After making space, this line inserts the new value val at position pos.


The second loop: for(int i=0; i<=n; i++)

This loop iterates through the entire array, including the newly inserted element.
It prints each element of the array, separated by spaces.



The overall effect is to insert a new element into the array at a specified 
position, shifting all subsequent elements to the right, and then display the resulting array.
*/