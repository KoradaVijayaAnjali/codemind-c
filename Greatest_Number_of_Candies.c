#include<stdio.h>
int main()
{
    int n,i,arr[100],max,m,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    k=arr[0];
    for(i=0;i<n;i++)
    {
        if(k<arr[i])
        {
            k=arr[i];
        }
    }
    max=k;
    for(i=0;i<n;i++)
    {
        if(m+arr[i]>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}