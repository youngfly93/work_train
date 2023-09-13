#include <string.h>
#include <stdio.h>

int Strlen(char* x)
{
    int count = 0;
    while( *x != '\0')
    {
        count++;
        x++;
    }
    return count;
}

int main()
{
    char a[] = "abcdef";
    int res = Strlen(a);
    printf("%d\n",res);
    return 0;
}