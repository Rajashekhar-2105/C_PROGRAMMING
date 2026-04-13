#include<stdio.h>
int main()
{
    int num,pos;
printf("enter the number and position to set bit\n");
scanf("%d%d",&num,&pos);
num=num|(1<<pos);
printf("number after setting bit is %d",num);
}