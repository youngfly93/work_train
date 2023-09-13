#include <string.h>
#include <stdio.h>


int main()
{
    int a = 12;
    int i = 0;
    for(i=32;i>=1;i-=2)
    {
        int bin = a>>i&1;
        printf("%d\n",bin);
    }
    for(i=31;i>=0;i-=2)
    {
        int bin = a>>i&1;
        printf("%d\n",bin);
    }
    return 0;
}
