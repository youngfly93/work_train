#include <string.h>
#include <stdio.h>

int Aus(int x)
{
    if(x%4 == 0)
    {
        if (x%100 != 0)
        {
            return 0;
        }
        else
            return 1;
    }
    else if(x%400 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a = 0;
    scanf("请输入年份:%d",&a);
    int year = Aus(a);
    if (year == 0)
    {
        printf("这是瑞年");
    }
    else
    {
        printf("这不是瑞年");
    }
    return 0;
}