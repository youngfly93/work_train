#include <string.h>
#include <stdio.h>

void compare(int* a,int* b,int* c)
{
    int tmp = 0;
    if (*b > *a)
    {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
    if (*c < *a  && *c > *b)
    {
        tmp = *b;
        *b = *c;
        *c = tmp;
    }

    if (*c > *a)
    {
        tmp = *c;
        *c = *b;
        *b = *a;
        *a = tmp;
    }

}

int main()
{
    int a = 20;
    int b = 30;
    int c = 10;
    compare(&a,&b,&c);
    printf("%d\t%d\t%d\n",a,b,c);
    return 0;
}