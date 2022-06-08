#include<stdio.h>
int gcd(int x,int y)
{
    int g,i;
    for(i=1;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
            g=i;
        }
    }
    return g;
}
int main()
{
    int a,b,g;
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("%d ",g);
}