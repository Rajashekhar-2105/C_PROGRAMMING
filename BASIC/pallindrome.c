#include<stdio.h>
void main()
{
    int num,rev=0,rem,temp;
    printf("enter the number\n");
    scanf("%d",&num);
    temp=num;
    for(rev=0;temp;temp=temp/10)
    {
        rem=temp%10;
        rev=rev*10+rem;
    }
    if(num==rev)
    {
        printf("%d is pallindrome\n",num);
    }
    else
    printf("%d is not pallindrome\n",num);

}