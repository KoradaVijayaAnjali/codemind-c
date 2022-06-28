#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    sum=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==sum || arr[i]<sum)
        {
           c++;  
        }
    }
    printf("%d",c);
}