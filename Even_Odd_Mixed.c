#include<stdio.h>
int main()
{
    int n,d,e=0,o=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d%2==0)
        {
             e+=1;   
        }
        else
        {
            o+=1;
        }
        n=n/10;
    }
    if(e>0&&o<1)
    {
        printf("Even");
    }
    else if(e<1&&o>0)
    {
        printf("Odd");
    }
    else if(e>0&&o>0)
    {
        printf("Mixed");
    }
}