#include<stdio.h>
void main()
{
    int num=12346,sum=0,rem;
    while(num>0)
    {
        rem=num%10;
        if(rem%2==0)
        {
        sum=sum+rem;
        }
        num=num/10;
        
    }
    printf("sum=%d\n",sum);
}