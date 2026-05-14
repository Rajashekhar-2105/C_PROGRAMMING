#include<stdio.h>
void main()
{
    int num,sum=0,i;
    printf("enter the number\n");
        scanf("%d",&num);
        for(i=1;i<num;i++)
        {
        if(num%i==0)
        sum=sum+i;
    }
        if(num==sum)
        printf("%d is perfect number\n",num);
        else
        printf("%d is not perfect number\n",num);
}