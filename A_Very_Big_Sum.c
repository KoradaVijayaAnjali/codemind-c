#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    long long int i,ai[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ai[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ai[i];
    }
    printf("%lld",sum);
}