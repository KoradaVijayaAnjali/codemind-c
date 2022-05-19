#include<stdio.h>
int main()
{
    int x,y,z,k,n;
    scanf("%d",&n);
    x=0;
    y=1;
    z=x+y;
    if(n==0 || n==1)
    {
        printf("True");
    }
    while(z<n)
    {
        x=y;
        y=z;
        z=x+y;
        if(n==z)
        {
            k=1;
        }
    }
    if(k==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}