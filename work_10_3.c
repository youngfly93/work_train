#include <string.h>
#include <stdio.h>
#include <assert.h>

//杨辉三角

void yh(int x)
{
    int t = 1;
    while (t <= x)
    {
        if (t <=2)
        {
            int i = 1;
            for(i=1;i<=t;i++)
            {
                printf("%d\t",1);
            }
            printf("\n");
        }
        if (t > 2)
        {
            int i = 0;
            for(i=1;i<=t;i++)
            {
                if(i==1||i==t)
                {
                    printf("%d\t",1);
                }
                else
                {
                    printf("%d\t",t-1);
                }
            }
            printf("\n");
        }
        t++;
    }

}

int main()
{
    int num =5;
    yh(5);
    return 0;
}