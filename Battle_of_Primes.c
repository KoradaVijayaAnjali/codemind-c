#include<stdio.h>
int isprime (int n)
{
    int i,c=0,k;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            k=i;
        }
    }
    if(c==2)
    {
        return k;
    }
    return 0;
}
int main()
{
    int n,m,k,i,j,p;
    scanf("%d%d",&n,&m);
    p=n+m;
    for(i=1;i<=2*p;i++)
    {
        k=isprime(p+i);
        if(k!=0)
        {
            printf("%d",i);
            break;
        }
    }
}