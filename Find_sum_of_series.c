#include<stdio.h>
int main()
{
    int n;
    float i,x,y;
    scanf("%d",&n);
    x=0;
    for(i=1;i<=n;i++)
    {
        y=1/i;
        x=x+y;
    }
    printf("%.2f",x);
}