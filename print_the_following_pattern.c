#include<stdio.h>
int main()
{
    int n,i,j;
    char arr[100][100],k='A';
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",k);
        }
        k++;
        printf("
");
    }
}