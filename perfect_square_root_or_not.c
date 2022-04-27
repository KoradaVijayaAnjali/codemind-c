#include<stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(num==i*i)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}