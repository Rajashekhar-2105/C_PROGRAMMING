#include<stdio.h>
void main()
{
    int num,count=0;
    printf("enter the number\n");
    
    scanf("%d",&num);
    while(num>0)
    {
        num=num&(num-1);
        count++;

    }
    printf("count of set bits in %d is %d",num,count);
}