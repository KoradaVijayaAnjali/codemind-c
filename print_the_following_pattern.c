#include<stdio.h>
int main()
{
    char i,j;
    int n;
    scanf("%d",&n);
    for(i=65+n-1;i>=65;i--)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",i);
        }
        n--;
        printf("
");
    }
}