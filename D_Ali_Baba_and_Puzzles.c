#include <stdio.h>

// int main() {
//     long long a, b, c, d, d2, d3;
    
    
//     scanf("%lld %lld %lld", &a, &b, &c);

    
//     d = a + (b * c);
//     d2 = a + b - c;
//     d3 = a*b-c;
    
//     //d3 = d3 + 1;
    
//     if (a + b * c == d) {
//         printf("YES");
//     } else if (a + b - c == d2) {
//         printf("YES");
//     } else if (a*b-c != d3) {
       
//         printf("YES");
//         } else {
//         printf("NO");
//     }
    
//     return 0;
// }



#include <stdio.h>

int main() {
    long long num1, num2, num3, result;
    scanf("%lld %lld %lld %lld", &num1, &num2, &num3, &result);

    int flag = 0;
    long long myResult1 = (num1 * num2) - num3;
    long long myResult2 = (num1 * num2) + num3;
    long long myResult3 = num1 + (num2 * num3);
    long long myResult4 = num1 - (num2 * num3);
    long long myResult5 = (num1 - num2) + num3;
    long long myResult6 = (num1 + num2) - num3;

    if (myResult1 == result || myResult2 == result || myResult3 == result ||
        myResult4 == result || myResult5 == result || myResult6 == result) {
        flag = 1;
    }

    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}