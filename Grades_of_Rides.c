#include<stdio.h>
int main()
{
    int HF,SF,Sf;
    scanf("%d%d%d",&HF,&SF,&Sf);
    HF>50;
    SF>60;
    Sf>100;
    if(HF>50 && SF>60 && Sf>100)
    {
        printf("10");
    }
    else if(HF>50 && SF>60 && Sf<100)
    {
        printf("9");
    }
    else if(HF<50 && SF>60 && Sf>100) 
    {
        printf("8");
    }
    else if(HF>50 && SF<60 && Sf>100)
    {
        printf("7");
    }
    else if(HF>50 || SF>60 || Sf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}
