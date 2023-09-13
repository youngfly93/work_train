#include <string.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    for(i=0;i<=999999;i++)
    {
        int count = 1;
        int sum = 0;
        int tmp = i;
        while(tmp/10)
        {
            count++;
            tmp = tmp/10;
        }
        tmp = i;
        while(tmp)
        {
            sum += pow(tmp%10,count);
            tmp = tmp/10;
        }
        if(sum == i)
            printf("%d\n",sum);
    }
    return 0;
}