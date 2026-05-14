#include<stdio.h>
void main()
{
    int num,c=0,i;
    int prime_count;
    for(num=10,prime_count=0;num<=50;num++)
    {
        for(i=1,c=0;i<=num;i++)
        {
            if(num%i==0)
            c++;
        }
        if(c==2)
        {
        
        printf("%d is prime number\n",num);
        prime_count++;
        

        }
    }
    printf("%d is prime_numbers count\n",prime_count);
}