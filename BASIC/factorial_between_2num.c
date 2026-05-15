#include<stdio.h>
void main()
{
    int num,i,fact;
    for(num=1;num<=10;num++)
    {
        for(i=1,fact=1;i<=num;i++)
        {
            fact=fact*i;
        }
        printf("factprial of %d = %d\n",num,fact);
    }
}