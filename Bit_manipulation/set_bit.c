#include<stdio.h>
int main()
{
    int num,pos1,pos2;
printf("enter the number and positions to set bits\n");
scanf("%d%d%d",&num,&pos1,&pos2);
num=num|(1<<pos1  | 1<<pos2);
printf("number after setting bit is %d",num);
}