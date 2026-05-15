#include<stdio.h>

int main()
{
    int num, sum, temp, rem, fact, i;

    for(num = 1; num <= 145; num++)
    {
        temp = num;

        for(sum = 0; temp != 0; temp = temp / 10)
        {
            rem = temp % 10;
            //fact = 1;

            for(i = 1,fact=1; i <= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}