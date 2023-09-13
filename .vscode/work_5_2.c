#include <string.h>
#include <stdio.h>

void change(int* a ,int* b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 20;
    int b = 30;
    change(&a,&b);
    printf("%d,%d",a,b);

    return 0;
}