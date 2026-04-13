#include<stdio.h>
void main()
{
    int num,pos1,pos2;
    printf("enter the number and positions to clear bits\n");
    scanf("%d%d%d",&num,&pos1,&pos2);
    num=num&~(1<<pos1 | 1<<pos2);
    printf("number after clearing bit is %d",num);
}