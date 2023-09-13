#include <string.h>
#include <stdio.h>

int Fibo(int a)
{
    if (a == 1)
        return 1;
    else if(a == 2)
        return 1;
    else if(a == 3)
        return 2;
    else 
        return Fibo(a-1) + Fibo(a-2);
}

int main()
{
    int a = 10;
    int ret = Fibo(a);
    printf("%d\n",ret);
    return 0;
}