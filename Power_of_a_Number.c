#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,n,res;
    scanf("%d%d%d",&x,&y,&m);
    n=pow(x,y);
    res=n%m;
    printf("%d",res);
}