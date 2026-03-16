#include<stdio.h>
void main()
{
    int a=10;
    int* ptr = &a;
    printf("Value of a is : %d\n",a);
    printf("The value of a is : %d\n",*ptr);
    printf("The address of a is : %p\n",&a);
    *ptr = 25;
    printf("Value of a is : %d\n",a);
    printf("The value of a is : %d\n",*ptr);
}