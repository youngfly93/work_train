#include <string.h>
#include <stdio.h>

int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a*fact(a-1);
}

int main()
{
    int a = 3;
    int result = fact(a);
    printf("%d\n",result);
    return 0;
}