#include <string.h>
#include <stdio.h>

int Com(int a , int b)
{
    int c = 1;
    int ret = 0;
    while(c > a && c > b)
    {
        if(a%c==0 && b%c == 0)
        {   
            ret = c;
            c++;
        }     
        else
            c++;
    }
    return ret;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    int result = Com(a,b);
    printf("最大公约数位%d\n",result);
    return 0;
}


