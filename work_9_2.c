#include <string.h>
#include <stdio.h>

int Soda(int x)
{
    int sum = x;
    int tmp = x;
    while(tmp > 1)
    {
        sum = sum + tmp/2;
        tmp = tmp/2 + tmp%2;
    }
    return sum;
}


int main()
{
    int a = 20;
    int ret  = Soda(a);
    printf("%d\n",ret);
    return 0;
}