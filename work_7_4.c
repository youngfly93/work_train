#include <string.h>
#include <stdio.h>

int main()
{
    int a = 20;
    int b = 30;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}