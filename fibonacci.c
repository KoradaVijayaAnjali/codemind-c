#include<stdio.h>
int main()
{
    int x,y,z,k=0,n;
    scanf("%d",&n);
    x=0;
    y=1;
    z=x+y;
    printf("%d %d ",x,y);
    while(z!=0)
    {
        printf("%d ",z);
        x=y;
        y=z;
        z=x+y;
        k++;
        if(k==n-2)
        {
            break;
        }
    }
}