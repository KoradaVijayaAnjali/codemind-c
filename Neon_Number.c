#include<stdio.h>
int main()
{
    int n,sum=0,neon=1,d;
    scanf("%d",&n);
    neon=n*n;
    while(neon>0)
    {
        d=neon%10;
        sum=sum+d;
        neon=neon/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}