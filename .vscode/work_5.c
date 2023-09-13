#include <string.h>
#include <stdio.h>

int pri(int x)
{
    int t = 0;
    for(t = 2 ;t<=x;t++)
        {
            if(x%t == 0)
                break;
        }
    if(t == x)
        return 0;
    else
        return 1;
}

int main()
{
    int i = 0;
    for(i=100;i<200;i++)
    {
        if (pri(i)==0)
            printf("%d\n",i);
        else
            continue;
    }
}
