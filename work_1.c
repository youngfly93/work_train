#include <string.h>
#include <stdio.h>
int max(int x ,int y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main()
{
    int a = 20;
    int b = 10;
    int ret = max(a,b);
    printf("%d\n",ret);
    return 0;
}