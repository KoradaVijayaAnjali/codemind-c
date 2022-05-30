#include<stdio.h>
#include<math.h>
int digitcount(int n)
{
    int d,k=0;
    while(n!=0)
    {
        d=n%10;
        k++;
        n=n/10;
    }
    return k;
}
int reverse(int n)
{
    int d,rev=0;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,m,d,dif,k,h,r,l;
    scanf("%d%d",&n,&m);
    k=digitcount(n);
    h=n;
    while(n!=0)
    {
        d=n%10;
        k--;
        n=n/10;
        if(k==m)
        {
            break;
        }
    }
    r=reverse(h);
    k=digitcount(r);
    while(r!=0)
    {
        d=r%10;
        k--;
        r=r/10;
        if(k==m)
        {
            break;
        }
    }
    l=reverse(r);
    dif=abs(n-l);
    printf("%d",dif);
}