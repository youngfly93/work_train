#include <string.h>
#include <stdio.h>

int power(int x,int y)
{
    if (y == 1)
        return x;
    else
        return x*power(x,y-1);

}

int main()
{
    int a = 2;
    int b = 3;
    int ret = power(2,3);
    printf("%d\n",ret);
    return 0;
}