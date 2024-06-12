#include<stdio.h>

int main(){
    int inpt, div;
    scanf("%d", &inpt);
    for(int i=1; i<=inpt; i++)
    {
        if(inpt%i==0){
           // div=i+2;
            printf("%d\n", i);
        // } else {
        //     printf("%d\n", i);
         }
    }
}