#include<stdio.h>
int main()
{
    int n,m,sum1=0,sum2=0,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum2=sum2+i;
        }
    }
    if(m==sum2 && n==sum1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}