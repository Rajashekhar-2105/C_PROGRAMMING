#include<stdio.h>
int sumof_2numbers(int a,int b)
{
    return a+b;
}
vodi main()
{
int a,b;
printf("Enter 2 numbers:"); 
scanf("%d%d",&a,&b);
result=sumof_2numbers(a,b);
printf("The sum is:%d",result);
}