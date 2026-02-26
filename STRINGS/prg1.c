#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("The strings are equal.");
    else
        printf("The strings are not equal.");
}