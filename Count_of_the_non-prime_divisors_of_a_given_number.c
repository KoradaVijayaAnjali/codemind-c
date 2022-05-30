#include<stdio.h>
void non_prime(int *arr,int p)
{
    int i,c=0,j,k=0;
    for(i=0;i<p;i++)
    {
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k++;
        }
        c=0;
    }
    printf("%d",p-k);
}
int main()
{
    int n,i,k,arr[100],p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
            arr[k]=i;
            k++;
        }
    }
    non_prime(arr,p);
}