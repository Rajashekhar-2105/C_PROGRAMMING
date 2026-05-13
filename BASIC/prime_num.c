#include<stdio.h>
void main()
{
    int num,i,c=0;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
 
   }
   if(c==2)
   {
    printf("%d is a prime number\n",num);
   }
   else
   {
    printf("%d is not prime\n",num);
   }
}