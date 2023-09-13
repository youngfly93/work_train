#include <string.h>
#include <stdio.h>

int bin(int a)
{
    int count = 0;
    while(a)
    {
        a = a&(a-1);
        count++;
    }
    return count;
}

int main()
{
    int a = 15;
    int ret = bin(a);
    printf("%d\n",ret);
    return 0;
}