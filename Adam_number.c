#include<stdio.h>
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
    int n,s,r,m,k;
    scanf("%d",&n);
    s=n*n;
    r=reverse(n);
    m=r*r;
    k=reverse(m);
    if(s==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}