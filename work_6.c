#include <string.h>
#include <stdio.h>

int Single(int x)
{
    if (x < 10)
        {printf("%d\t",x);
        return 0;}
    else
        {
            printf("%d\t",x%10);
            return Single(x/10);
        }
}

int main()
{
    int a = 1234;
    Single(a);
    return 0;
}