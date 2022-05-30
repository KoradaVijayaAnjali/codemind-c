#include<stdio.h>
int divisors(int i)
{
    int j,k=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int n,i,j=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=divisors(i);
        if(k==9)
        {
            j++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",j);
}