#include<stdio.h>
int sum_of_number(int a,int b)
{
return a+b;
}
int main()
{
    int a,b;
printf("enter the two numbers\n");
scanf("%d %d",&a,&b);
int result = sum_of_number(a,b);
printf("sum = %d", result);
return 0;
}