// #include <stdio.h>

// int main() {
//     int lucky, num, sum, sum2;
//     scanf("%d %d\n", &lucky, &num);
//     sum= lucky/10;
//     sum= lucky%10;

//     if (lucky >= 10 && lucky <= 99 ) {
//        sum%2 != 0 || sum%2 == 0;
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    char num[3];
    scanf("%2s", num);

    int num1 = num[0] - '0';
    int num2 = num[1] - '0';

    if (num2 % num1 == 0 || num1 % num2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}















