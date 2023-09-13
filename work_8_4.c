#include <string.h>
#include <stdio.h>


int main()
{
    int a = 5;
    int b = 5;
    int i = 0;
    int tmp = 0;
    int sum = 0;
    for(i = 0;i <= b;i++)
    {
        tmp = tmp*10 + a;
        sum += tmp;
    }
    printf("%d\n",sum);
    return 0;
}