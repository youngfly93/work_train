#include <string.h>
#include <stdio.h>

int Divi(int a)
{
    if (a%5 != 0)
        return 0;
    else
        return 1;
}


int main()
{
    int a = 0;
    scanf("输入:%d\n" ,&a);
    int ret = Divi(a);
    if (ret == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}