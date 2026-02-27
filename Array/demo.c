#include<srdio.h>
void main()
{
    int arr[5],i;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    printf("The numbers are:");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
}