#include <string.h>
#include <stdio.h>

float sum = 0;
int main()
{
    //static int sum = 0;
    int i = 0;
    for(i=1;i<=100;i++)
    {
        if(i%2 == 1)
        {
            sum = sum + (1.0/i);
            printf("%d\n",i);
        }
        if(i%2 != 1)
        {
            sum = sum - (1.0/i);
            printf("%d\n",i);
        }
    }
    printf("%f1\n",sum);
}