#include<stdio.h>
void main()
{
    int num1=0,num2=1,num3;
    for(int i=0;i<=50;i++)
    {
        num3=num1+num2;
        if(num3<=50)
        {
            printf("%d ",num3);
            num1=num2;
            num2=num3;
        }
    }
}