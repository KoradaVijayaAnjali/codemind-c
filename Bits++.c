#include<stdio.h>
int main()
{
    int m;
    char arr[4];
    while(scanf("%d",&m)!=EOF)
    {
        int num=0;
        while(m--)
        {
            scanf("%s",arr);
            if(arr[1]=='+')
            num++;
            else if(arr[1]=='-')
            num--;
        }
        printf("%d
",num);
    }
    return 0;
}