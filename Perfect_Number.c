#include<stdio.h>
int factors(int n)
{
    int i,fc=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fc=fc+i;
        }
    }
    return fc;
}
int main()
{
    int n,fc;
    scanf("%d",&n);
    fc=factors(n);
    if(fc==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}