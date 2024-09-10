int main() {
    int N, count2 = 0, count3 = 0;
    int A[100001];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        
        if (A[i] % 2 == 0) {
            count2++;
        } else if (A[i] % 3 == 0) {
            count3++;
        }
    }
    
    printf("%d %d\n", count2, count3);
    
    return 0;
}