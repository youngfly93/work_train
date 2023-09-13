#include <string.h>
#include <stdio.h>

int Strlen(char* x)
{
    if (*x == '\0')
        return 0;
    else
        {
        return 1 + Strlen(1 + x);
        }
}

int main()
{
    char a[] = "abcdef";
    int res = Strlen(a);
    printf("%d\n",res);
    return 0;
}