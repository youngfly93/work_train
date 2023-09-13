#include <string.h>
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int mult = 0;
    for(a=1;a<10;a++)
    {
        for(b=1;b<10;b++)
            {
            mult = a*b;
            printf("%d * %d = %d\n",a,b,mult);
            }
    }
    return 0;
}