#include <string.h>
#include <stdio.h>


int sumchar(int x)
{
    if (x<10)
        return x;
    else
        {
        int a = x%10;
        return a + sumchar(x/10);
        }
}

int main()
{
    int a = 1234;
    int ret = sumchar(a);
    printf("%d\n",ret);
    return 0;
}