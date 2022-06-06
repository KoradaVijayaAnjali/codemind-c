#include<stdio.h>
int main()
{
    int n,a[50],count=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=a[i];j>=1;j--)
        {
            count=count*j;
        }
        printf("%d
",count);
    }
}