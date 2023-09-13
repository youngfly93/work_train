#include <string.h>
#include <stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    for(i =101;i<=200;i++)
    {
        int t = 0;
        for(t = 2 ;t<=i;t++)
            {
                if(i%t == 0)
                    break;
            }
        if(t == i)
        {
            count++;
            printf("%d ",i);
        }
    }
    return 0;
}