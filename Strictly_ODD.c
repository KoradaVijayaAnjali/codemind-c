#include<stdio.h>
int main()
{
    int n,i,x[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i+=2)
    {
        if(x[i]%2!=0)
        {
            printf("False");
            c++;
            break;
        }
    }
    if(c==0)
    printf("True");
}