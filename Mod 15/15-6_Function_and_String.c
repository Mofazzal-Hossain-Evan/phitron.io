#include<stdio.h>
#include<string.h>

void fun(char ar[]){
    printf("%d", strlen(ar));
    char n[]="World";
    return n;
}
int main()
{
    char ar[20]="hello";
    fun(ar);
    return 0;
}
//error: incompatible types when returning type ‘char *’ but ‘void’ was expected