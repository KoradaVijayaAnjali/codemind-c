#include<stdio.h>
int main()
{
    int n,i,a,b;
    int s=0,p=0;
    scanf("%d",&n);
    int arr[n],c[n],ze[n],e=0,d=0;
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
        else
        {
            ze[e]=arr[i];
            e++;
        }
    }
    int min=ze[0];
    for(i=0;i<e;i++)
    {
        if(ze[i]<min)
        {
            min=ze[i];
        }
    }
    if(e==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",min);
    }
}