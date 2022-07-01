#include<stdio.h>
int main()
{
    int n,i,a,b;
    int s=0,p=0;
    scanf("%d",&n);
    int arr[n],c[n],d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            c[d]=arr[i];
            d++;
        }
    }
    int max=c[0];
    for(i=0;i<d;i++)
    {
        if(c[i]>max)
        {
            max=c[i];
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}