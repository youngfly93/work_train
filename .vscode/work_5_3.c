#include <string.h>
#include <stdio.h>

int mut(int x,int y)
{
    int mult = 0;
    int a = 0;
    int b = 0;
    for(a=1;a<=x;a++)
    {
        for(b=1;b<=y;b++)
            {
            mult = a*b;
            printf("%d * %d = %d\n",a,b,mult);
            }
    }
    return 0;

}

int main()
{
    int x = 0;
    int y = 0;
    scanf("%d,%d",&x,&y);
    mut(x,y);
    return 0;
}
