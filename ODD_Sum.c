#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,es=0,os=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            os=os+arr[i];
        }
    }
    printf("%d",os);
}