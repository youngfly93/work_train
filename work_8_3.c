#include <string.h>
#include <stdio.h>

int main()
{
    int num = 1;
    char *byte = (char *)&num;

    if(*byte == 1)
    {
        printf("litte\n");
    }
    else
    {
        printf("big\n");
    }
    return 0;
}