#include<stdio.h>
int main()
{
    int P,I,T,SI,N;
    scanf("%d%d%d",&P,&I,&T);
    N=P*I*T;
    SI=N/100;
    printf("%d",SI);
}