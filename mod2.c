
#include <stdio.h>
int main()
{
    /*
    int a = 10, b = 3;
    int mod = a % b;
    printf("%d", mod);

*/

int tk;
    scanf("%d", &tk);
    if (tk >= 100) 
    {
        printf("Burger khabo");
    } else if (tk >= 50) 
    {
        printf("Fuchka khabo");
    } else if (tk >= 20) 
    { // Removed the semicolon here
        printf("Ice cream khabo");
    } else {
        printf("kichu e na");
    }




    return 0;
}