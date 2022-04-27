#include<stdio.h>
int main()
{
    int n,a[100],i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=n;
    for(m;m>n/2;m--)
    {
        printf("%d ",a[m-1]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
    }
}