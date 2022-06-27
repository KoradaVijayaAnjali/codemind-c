#include<stdio.h>
int main()
{
    int n,sum=0,spy=1,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        spy=spy*d;
        n=n/10;
    }
    if(sum==spy)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}