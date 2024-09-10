#include <stdio.h>

int main() {
    int T, M1, M2, D;
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &M1, &M2, &D);
        
        int total_farmers = M1 + M2;
        int result;
        
        if (total_farmers > 0) {
            int new_days = (M1 * D) / total_farmers;
            result = D - new_days;
        } else {
            result = 0; 
        }
        
        printf("%d\n", result);
    }
    
    return 0;
}