#include<stdio.h>

int main(){
    long long int n,m,k;
    scanf("%lld %lld %lld", &n, &m,&k);
    
    long long int min = 0;

    if(n<m && n<k)
    {
    min = n;    
    } else if(m<n&&m<k)
    {
    min = m;    
    }else if(k<n&&k<m)
    {
    min = k;    
    }

    long long int newN = (n-min)/2;
    long long int newM = m-min;
    long long int newk = k-min;
    
    if(newN<=newk)
    {
        printf("%lld\n", newN + min);
    } else if (newk<newN)
    {
        printf("%lld\n", newk + min);
    }
    return 0;
}