#include<stdio.h>
int main()
{
    char str[100];
    int i,c;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]%2)
        {
            c=(str[i]-'0')*(str[i]-'0');
            printf("%d",c);
        }
    }
}