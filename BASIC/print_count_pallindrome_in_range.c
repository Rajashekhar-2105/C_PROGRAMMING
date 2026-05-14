#include<stdio.h>
void main()
{
    int num,rev=0,rem,temp;
    int pal_count=0;
    for(num=10;num<=100;num++)
    {
        temp=num;
        for(rev=0;temp;temp=temp/10)
        {
            rem=temp%10;
            rev=rev*10+rem;

        }
        if(num==rev)
        {
            printf("%d is pallindrome\n",num);
pal_count++;
        }
    }
    printf("%d is pallindrome number count\n",pal_count);
}